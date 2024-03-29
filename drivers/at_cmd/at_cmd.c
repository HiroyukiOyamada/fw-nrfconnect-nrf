/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
 */

#include <logging/log.h>
#include <zephyr.h>
#include <stdio.h>
#include <net/socket.h>
#include <init.h>
#include <bsd_limits.h>

#include <at_cmd.h>

LOG_MODULE_REGISTER(at_cmd, CONFIG_AT_CMD_LOG_LEVEL);

#define THREAD_PRIORITY   K_PRIO_PREEMPT(CONFIG_AT_CMD_THREAD_PRIO)

#define AT_CMD_OK_STR    "OK"
#define AT_CMD_ERROR_STR "ERROR"
#define AT_CMD_CMS_STR   "+CMS:"
#define AT_CMD_CME_STR   "+CME:"

static K_THREAD_STACK_DEFINE(socket_thread_stack, \
				CONFIG_AT_CMD_THREAD_STACK_SIZE);
static K_MUTEX_DEFINE(cmd_pending);

static int              common_socket_fd;
static char             *response_buf;
static u32_t            response_buf_len;

static struct k_thread  socket_thread;
static at_cmd_handler_t notification_handler;
static at_cmd_handler_t current_cmd_handler;

struct return_state_object {
	int               code;
	enum at_cmd_state state;
};

K_MSGQ_DEFINE(return_code_msq, sizeof(struct return_state_object), 1, 4);

struct callback_work_item {
	struct k_work    work;
	char             data[CONFIG_AT_CMD_RESPONSE_MAX_LEN];
	at_cmd_handler_t callback;
};

static int open_socket(void)
{
	common_socket_fd = socket(AF_LTE, 0, NPROTO_AT);

	if (common_socket_fd == -1) {
		return -errno;
	}

	return 0;
}

static int get_return_code(char *buf, struct return_state_object *ret)
{
	char *tmpstr = NULL;
	int new_len  = 0;

	ret->state = AT_CMD_NOTIFICATION;

	do {
		tmpstr = strstr(buf, AT_CMD_OK_STR);
		if (tmpstr) {
			ret->state = AT_CMD_OK;
			ret->code  = 0;
			break;
		}

		tmpstr = strstr(buf, AT_CMD_ERROR_STR);
		if (tmpstr) {
			ret->state = AT_CMD_ERROR;
			ret->code  = ENOEXEC;
			break;
		}

		tmpstr = strstr(buf, AT_CMD_CMS_STR);
		if (tmpstr) {
			ret->state = AT_CMD_ERROR_CMS;
			ret->code = atoi(&buf[ARRAY_SIZE(AT_CMD_CMS_STR) - 1]);
			break;
		}

		tmpstr = strstr(buf, AT_CMD_CME_STR);
		if (tmpstr) {
			ret->state = AT_CMD_ERROR_CME;
			ret->code = atoi(&buf[ARRAY_SIZE(AT_CMD_CMS_STR) - 1]);
			break;
		}
	} while (0);

	if (tmpstr) {
		new_len = tmpstr - buf;
		buf[new_len++] = '\0';
	} else {
		new_len = strlen(buf) + 1;
	}

	return new_len;
}

static void callback_worker(struct k_work *item)
{
	struct callback_work_item *data =
		CONTAINER_OF(item, struct callback_work_item, work);

	if ((data != NULL) && (data->callback != NULL)) {
		data->callback(data->data);
	}

	k_free(data);
}


static void socket_thread_fn(void *arg1, void *arg2, void *arg3)
{
	int                        bytes_read;
	int                        payload_len;
	static char                buf[CONFIG_AT_CMD_RESPONSE_MAX_LEN];
	bool                       callback = true;
	struct return_state_object ret = {
						.state = AT_CMD_OK,
						.code  = 0,
					};

	ARG_UNUSED(arg1);
	ARG_UNUSED(arg2);
	ARG_UNUSED(arg3);

	LOG_DBG("AT socket thread started");

	for (;;) {
		bytes_read = recv(common_socket_fd, buf, sizeof(buf), 0);

		if (bytes_read < 0) {
			LOG_ERR("AT socket recv failed with err %d",
				bytes_read);

			if ((close(common_socket_fd) == 0) &&
			    (open_socket() == 0)) {
				LOG_INF("AT socket recovered");

				if (cmd_pending.lock_count > 0) {
					ret.state = AT_CMD_ERROR;
					ret.code  = -errno;
					goto next;
				} else {
					continue;
				}
			}

			LOG_ERR("Unrecoverable reception error (err: %d), "
				"thread killed", errno);
			close(common_socket_fd);
			return;
		} else if (bytes_read == sizeof(buf) ||
			   buf[bytes_read - 1] != '\0') {

			LOG_ERR("AT message to large for reception buffer or "
				"missing termination character");
			ret.state = AT_CMD_ERROR;
			ret.code  = -ENOBUFS;
			goto next;
		}

		payload_len = get_return_code(buf, &ret);

		if (ret.state != AT_CMD_NOTIFICATION) {
			if ((response_buf_len > 0) &&
			    (response_buf != NULL)) {
				if (response_buf_len > payload_len) {
					memcpy(response_buf,
						buf, payload_len);
				} else {
					LOG_ERR("Response buffer not large "
						"enough");

					ret.code = -EMSGSIZE;
					ret.code = AT_CMD_ERROR;
				}

				callback         = false;
				response_buf_len = 0;
				response_buf     = NULL;
			}
		}

		if (payload_len == 0) {
			goto next;
		}

		if (callback) {
			struct callback_work_item *item =
			k_malloc(sizeof(struct callback_work_item));

			if (!item) {
				LOG_DBG("Failed to allocate work item");

				ret.state = AT_CMD_ERROR;
				ret.code  = -ENOMEM;

				goto next;
			}

			k_work_init(&item->work, callback_worker);

			memcpy(item->data, buf, payload_len);

			if (ret.state == AT_CMD_NOTIFICATION) {
				item->callback = notification_handler;
			} else {
				item->callback = current_cmd_handler;
			}

			k_work_submit(&item->work);
		}
next:
		callback            = true;
		current_cmd_handler = NULL;

		if (ret.state != AT_CMD_NOTIFICATION) {
			struct return_state_object ret_copy = {
				.state = ret.state,
				.code  = ret.code,
			};

			ret.code  = 0;
			ret.state = AT_CMD_OK;

			k_msgq_put(&return_code_msq, &ret_copy, K_FOREVER);
		}
	}
}

static inline int at_write(const char *const cmd, enum at_cmd_state *state)
{
	int bytes_sent;
	int bytes_to_send = strlen(cmd);
	struct return_state_object ret;

	LOG_DBG("Sending command %s", cmd);
	bytes_sent = send(common_socket_fd, cmd, bytes_to_send, 0);

	if (bytes_sent != bytes_to_send) {
		LOG_ERR("Failed to send AT command");
		ret.code  = -EIO;
		ret.state = AT_CMD_ERROR;
	} else {
		k_msgq_get(&return_code_msq, &ret, K_FOREVER);
		LOG_DBG("Bytes sent: %d", bytes_sent);
	}

	if (state) {
		*state = ret.state;
	}

	return ret.code;
}

int at_cmd_write_with_callback(const char *const cmd,
			       at_cmd_handler_t  handler,
			       enum at_cmd_state *state)
{
	int return_code;

	k_mutex_lock(&cmd_pending, K_FOREVER);

	current_cmd_handler = handler;
	return_code = at_write(cmd, state);

	k_mutex_unlock(&cmd_pending);

	return return_code;
}

int at_cmd_write(const char *const cmd,
		 char *buf,
		 size_t buf_len,
		 enum at_cmd_state *state)
{
	int return_code;

	k_mutex_lock(&cmd_pending, K_FOREVER);

	response_buf     = buf;
	response_buf_len = buf_len;

	return_code = at_write(cmd, state);

	k_mutex_unlock(&cmd_pending);

	return return_code;
}

void at_cmd_set_notification_handler(at_cmd_handler_t handler)
{
	k_mutex_lock(&cmd_pending, K_FOREVER);

	notification_handler = handler;

	k_mutex_unlock(&cmd_pending);
}

static int at_cmd_init(struct device *dev)
{
	ARG_UNUSED(dev);

	if (open_socket() != 0) {
		LOG_ERR("Failed to open AT socket (err:%d)", errno);
		return -1;
	}

	LOG_DBG("Common AT socket created");

	k_thread_create(&socket_thread, socket_thread_stack,
			K_THREAD_STACK_SIZEOF(socket_thread_stack),
			socket_thread_fn,
			NULL, NULL, NULL,
			THREAD_PRIORITY, 0, K_NO_WAIT);

	LOG_DBG("Common AT socket processing thread created");

	return 0;
}

SYS_INIT(at_cmd_init, APPLICATION, CONFIG_AT_CMD_INIT_PRIORITY);

