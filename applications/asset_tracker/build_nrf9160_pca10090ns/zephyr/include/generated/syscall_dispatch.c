/* auto-generated by gen_syscalls.py, don't edit */

/* Weak handler functions that get replaced by the real ones unless a system
 * call is not implemented due to kernel configuration.
 */

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_adc_channel_setup(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_adc_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_adc_read_async(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_aio_cmp_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_aio_cmp_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_cas(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_add(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_sub(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_or(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_xor(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_and(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_atomic_nand(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_can_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_can_attach_msgq(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_can_detach(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_can_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_counter_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_counter_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_counter_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_counter_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_counter_get_top_value(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_counter_get_max_relative_alarm(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_device_get_binding(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_dma_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_dma_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_entropy_get_entropy(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_erase(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_write_protection_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_get_page_info_by_offs(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_get_page_info_by_idx(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_get_page_count(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_flash_get_write_block_size(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_gpio_config(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_gpio_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_gpio_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_gpio_enable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_gpio_disable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_gpio_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_hwinfo_get_device_id(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2c_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2c_transfer(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2c_slave_register(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2c_slave_unregister(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2c_slave_driver_register(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2c_slave_driver_unregister(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2s_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2s_buf_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2s_buf_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_i2s_trigger(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_ipm_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_ipm_max_data_size_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_ipm_max_id_val_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_ipm_set_enabled(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_object_access_grant(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_object_release(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_object_alloc(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_create(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_sleep(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_usleep(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_busy_wait(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_yield(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_wakeup(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_current_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_abort(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_priority_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_priority_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_deadline_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_suspend(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_resume(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_is_preempt_thread(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_custom_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_custom_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_name_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_thread_name_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_status_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_status_sync(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_remaining_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_user_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_timer_user_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_uptime_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_uptime_get_32(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_cancel_wait(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_alloc_append(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_alloc_prepend(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_is_empty(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_peek_head(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_queue_peek_tail(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_stack_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_stack_push(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_stack_pop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_mutex_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_mutex_lock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_mutex_unlock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_sem_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_sem_take(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_sem_give(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_sem_reset(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_sem_count_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_put(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_peek(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_purge(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_num_free_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_get_attrs(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_msgq_num_used_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_pipe_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_pipe_put(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_pipe_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_poll(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_poll_signal_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_poll_signal_reset(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_poll_signal_check(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_poll_signal_raise(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_k_str_out(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_led_blink(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_led_set_brightness(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_led_on(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_led_off(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_pwm_pin_set_cycles(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_pwm_get_cycles_per_sec(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_rtc_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_rtc_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_rtc_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_rtc_set_alarm(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_rtc_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_sensor_attr_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_sensor_sample_fetch(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_sensor_sample_fetch_chan(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_sensor_channel_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_spi_transceive(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_spi_release(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_clock_hw_cycles_per_sec_runtime_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_err_check(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_poll_in(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_poll_out(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_config_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_tx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_tx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_rx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_rx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_err_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_err_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_is_pending(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_irq_update(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_line_ctrl_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_line_ctrl_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_uart_drv_cmd(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_errno(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_zephyr_read_stdin(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_zephyr_write_stdout(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zephyr_fputc(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zephyr_fwrite(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_sys_mutex_kernel_lock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_sys_mutex_kernel_unlock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_socket(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_close(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_shutdown(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_bind(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_connect(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_listen(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_accept(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_sendto(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_recvfrom(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_fcntl(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_poll(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_getsockname(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_gethostname(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_zsock_inet_pton(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t z_hdlr_z_zsock_getaddrinfo_internal(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);


const _k_syscall_handler_t _k_syscall_table[K_SYSCALL_LIMIT] = {
	[K_SYSCALL_ADC_CHANNEL_SETUP] = z_hdlr_adc_channel_setup,
	[K_SYSCALL_ADC_READ] = z_hdlr_adc_read,
	[K_SYSCALL_ADC_READ_ASYNC] = z_hdlr_adc_read_async,
	[K_SYSCALL_AIO_CMP_DISABLE] = z_hdlr_aio_cmp_disable,
	[K_SYSCALL_AIO_CMP_GET_PENDING_INT] = z_hdlr_aio_cmp_get_pending_int,
	[K_SYSCALL_ATOMIC_CAS] = z_hdlr_atomic_cas,
	[K_SYSCALL_ATOMIC_ADD] = z_hdlr_atomic_add,
	[K_SYSCALL_ATOMIC_SUB] = z_hdlr_atomic_sub,
	[K_SYSCALL_ATOMIC_SET] = z_hdlr_atomic_set,
	[K_SYSCALL_ATOMIC_OR] = z_hdlr_atomic_or,
	[K_SYSCALL_ATOMIC_XOR] = z_hdlr_atomic_xor,
	[K_SYSCALL_ATOMIC_AND] = z_hdlr_atomic_and,
	[K_SYSCALL_ATOMIC_NAND] = z_hdlr_atomic_nand,
	[K_SYSCALL_CAN_SEND] = z_hdlr_can_send,
	[K_SYSCALL_CAN_ATTACH_MSGQ] = z_hdlr_can_attach_msgq,
	[K_SYSCALL_CAN_DETACH] = z_hdlr_can_detach,
	[K_SYSCALL_CAN_CONFIGURE] = z_hdlr_can_configure,
	[K_SYSCALL_COUNTER_START] = z_hdlr_counter_start,
	[K_SYSCALL_COUNTER_STOP] = z_hdlr_counter_stop,
	[K_SYSCALL_COUNTER_READ] = z_hdlr_counter_read,
	[K_SYSCALL_COUNTER_GET_PENDING_INT] = z_hdlr_counter_get_pending_int,
	[K_SYSCALL_COUNTER_GET_TOP_VALUE] = z_hdlr_counter_get_top_value,
	[K_SYSCALL_COUNTER_GET_MAX_RELATIVE_ALARM] = z_hdlr_counter_get_max_relative_alarm,
	[K_SYSCALL_DEVICE_GET_BINDING] = z_hdlr_device_get_binding,
	[K_SYSCALL_DMA_START] = z_hdlr_dma_start,
	[K_SYSCALL_DMA_STOP] = z_hdlr_dma_stop,
	[K_SYSCALL_ENTROPY_GET_ENTROPY] = z_hdlr_entropy_get_entropy,
	[K_SYSCALL_FLASH_READ] = z_hdlr_flash_read,
	[K_SYSCALL_FLASH_WRITE] = z_hdlr_flash_write,
	[K_SYSCALL_FLASH_ERASE] = z_hdlr_flash_erase,
	[K_SYSCALL_FLASH_WRITE_PROTECTION_SET] = z_hdlr_flash_write_protection_set,
	[K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS] = z_hdlr_flash_get_page_info_by_offs,
	[K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX] = z_hdlr_flash_get_page_info_by_idx,
	[K_SYSCALL_FLASH_GET_PAGE_COUNT] = z_hdlr_flash_get_page_count,
	[K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE] = z_hdlr_flash_get_write_block_size,
	[K_SYSCALL_GPIO_CONFIG] = z_hdlr_gpio_config,
	[K_SYSCALL_GPIO_WRITE] = z_hdlr_gpio_write,
	[K_SYSCALL_GPIO_READ] = z_hdlr_gpio_read,
	[K_SYSCALL_GPIO_ENABLE_CALLBACK] = z_hdlr_gpio_enable_callback,
	[K_SYSCALL_GPIO_DISABLE_CALLBACK] = z_hdlr_gpio_disable_callback,
	[K_SYSCALL_GPIO_GET_PENDING_INT] = z_hdlr_gpio_get_pending_int,
	[K_SYSCALL_HWINFO_GET_DEVICE_ID] = z_hdlr_hwinfo_get_device_id,
	[K_SYSCALL_I2C_CONFIGURE] = z_hdlr_i2c_configure,
	[K_SYSCALL_I2C_TRANSFER] = z_hdlr_i2c_transfer,
	[K_SYSCALL_I2C_SLAVE_REGISTER] = z_hdlr_i2c_slave_register,
	[K_SYSCALL_I2C_SLAVE_UNREGISTER] = z_hdlr_i2c_slave_unregister,
	[K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER] = z_hdlr_i2c_slave_driver_register,
	[K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER] = z_hdlr_i2c_slave_driver_unregister,
	[K_SYSCALL_I2S_CONFIGURE] = z_hdlr_i2s_configure,
	[K_SYSCALL_I2S_BUF_READ] = z_hdlr_i2s_buf_read,
	[K_SYSCALL_I2S_BUF_WRITE] = z_hdlr_i2s_buf_write,
	[K_SYSCALL_I2S_TRIGGER] = z_hdlr_i2s_trigger,
	[K_SYSCALL_IPM_SEND] = z_hdlr_ipm_send,
	[K_SYSCALL_IPM_MAX_DATA_SIZE_GET] = z_hdlr_ipm_max_data_size_get,
	[K_SYSCALL_IPM_MAX_ID_VAL_GET] = z_hdlr_ipm_max_id_val_get,
	[K_SYSCALL_IPM_SET_ENABLED] = z_hdlr_ipm_set_enabled,
	[K_SYSCALL_K_OBJECT_ACCESS_GRANT] = z_hdlr_k_object_access_grant,
	[K_SYSCALL_K_OBJECT_RELEASE] = z_hdlr_k_object_release,
	[K_SYSCALL_K_OBJECT_ALLOC] = z_hdlr_k_object_alloc,
	[K_SYSCALL_K_THREAD_CREATE] = z_hdlr_k_thread_create,
	[K_SYSCALL_K_SLEEP] = z_hdlr_k_sleep,
	[K_SYSCALL_K_USLEEP] = z_hdlr_k_usleep,
	[K_SYSCALL_K_BUSY_WAIT] = z_hdlr_k_busy_wait,
	[K_SYSCALL_K_YIELD] = z_hdlr_k_yield,
	[K_SYSCALL_K_WAKEUP] = z_hdlr_k_wakeup,
	[K_SYSCALL_K_CURRENT_GET] = z_hdlr_k_current_get,
	[K_SYSCALL_K_THREAD_ABORT] = z_hdlr_k_thread_abort,
	[K_SYSCALL_K_THREAD_START] = z_hdlr_k_thread_start,
	[K_SYSCALL_K_THREAD_PRIORITY_GET] = z_hdlr_k_thread_priority_get,
	[K_SYSCALL_K_THREAD_PRIORITY_SET] = z_hdlr_k_thread_priority_set,
	[K_SYSCALL_K_THREAD_DEADLINE_SET] = z_hdlr_k_thread_deadline_set,
	[K_SYSCALL_K_THREAD_SUSPEND] = z_hdlr_k_thread_suspend,
	[K_SYSCALL_K_THREAD_RESUME] = z_hdlr_k_thread_resume,
	[K_SYSCALL_K_IS_PREEMPT_THREAD] = z_hdlr_k_is_preempt_thread,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_SET] = z_hdlr_k_thread_custom_data_set,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_GET] = z_hdlr_k_thread_custom_data_get,
	[K_SYSCALL_K_THREAD_NAME_SET] = z_hdlr_k_thread_name_set,
	[K_SYSCALL_K_THREAD_NAME_GET] = z_hdlr_k_thread_name_get,
	[K_SYSCALL_K_TIMER_START] = z_hdlr_k_timer_start,
	[K_SYSCALL_K_TIMER_STOP] = z_hdlr_k_timer_stop,
	[K_SYSCALL_K_TIMER_STATUS_GET] = z_hdlr_k_timer_status_get,
	[K_SYSCALL_K_TIMER_STATUS_SYNC] = z_hdlr_k_timer_status_sync,
	[K_SYSCALL_K_TIMER_REMAINING_GET] = z_hdlr_k_timer_remaining_get,
	[K_SYSCALL_K_TIMER_USER_DATA_SET] = z_hdlr_k_timer_user_data_set,
	[K_SYSCALL_K_TIMER_USER_DATA_GET] = z_hdlr_k_timer_user_data_get,
	[K_SYSCALL_K_UPTIME_GET] = z_hdlr_k_uptime_get,
	[K_SYSCALL_K_UPTIME_GET_32] = z_hdlr_k_uptime_get_32,
	[K_SYSCALL_K_QUEUE_INIT] = z_hdlr_k_queue_init,
	[K_SYSCALL_K_QUEUE_CANCEL_WAIT] = z_hdlr_k_queue_cancel_wait,
	[K_SYSCALL_K_QUEUE_ALLOC_APPEND] = z_hdlr_k_queue_alloc_append,
	[K_SYSCALL_K_QUEUE_ALLOC_PREPEND] = z_hdlr_k_queue_alloc_prepend,
	[K_SYSCALL_K_QUEUE_GET] = z_hdlr_k_queue_get,
	[K_SYSCALL_K_QUEUE_IS_EMPTY] = z_hdlr_k_queue_is_empty,
	[K_SYSCALL_K_QUEUE_PEEK_HEAD] = z_hdlr_k_queue_peek_head,
	[K_SYSCALL_K_QUEUE_PEEK_TAIL] = z_hdlr_k_queue_peek_tail,
	[K_SYSCALL_K_STACK_ALLOC_INIT] = z_hdlr_k_stack_alloc_init,
	[K_SYSCALL_K_STACK_PUSH] = z_hdlr_k_stack_push,
	[K_SYSCALL_K_STACK_POP] = z_hdlr_k_stack_pop,
	[K_SYSCALL_K_MUTEX_INIT] = z_hdlr_k_mutex_init,
	[K_SYSCALL_K_MUTEX_LOCK] = z_hdlr_k_mutex_lock,
	[K_SYSCALL_K_MUTEX_UNLOCK] = z_hdlr_k_mutex_unlock,
	[K_SYSCALL_K_SEM_INIT] = z_hdlr_k_sem_init,
	[K_SYSCALL_K_SEM_TAKE] = z_hdlr_k_sem_take,
	[K_SYSCALL_K_SEM_GIVE] = z_hdlr_k_sem_give,
	[K_SYSCALL_K_SEM_RESET] = z_hdlr_k_sem_reset,
	[K_SYSCALL_K_SEM_COUNT_GET] = z_hdlr_k_sem_count_get,
	[K_SYSCALL_K_MSGQ_ALLOC_INIT] = z_hdlr_k_msgq_alloc_init,
	[K_SYSCALL_K_MSGQ_PUT] = z_hdlr_k_msgq_put,
	[K_SYSCALL_K_MSGQ_GET] = z_hdlr_k_msgq_get,
	[K_SYSCALL_K_MSGQ_PEEK] = z_hdlr_k_msgq_peek,
	[K_SYSCALL_K_MSGQ_PURGE] = z_hdlr_k_msgq_purge,
	[K_SYSCALL_K_MSGQ_NUM_FREE_GET] = z_hdlr_k_msgq_num_free_get,
	[K_SYSCALL_K_MSGQ_GET_ATTRS] = z_hdlr_k_msgq_get_attrs,
	[K_SYSCALL_K_MSGQ_NUM_USED_GET] = z_hdlr_k_msgq_num_used_get,
	[K_SYSCALL_K_PIPE_ALLOC_INIT] = z_hdlr_k_pipe_alloc_init,
	[K_SYSCALL_K_PIPE_PUT] = z_hdlr_k_pipe_put,
	[K_SYSCALL_K_PIPE_GET] = z_hdlr_k_pipe_get,
	[K_SYSCALL_K_POLL] = z_hdlr_k_poll,
	[K_SYSCALL_K_POLL_SIGNAL_INIT] = z_hdlr_k_poll_signal_init,
	[K_SYSCALL_K_POLL_SIGNAL_RESET] = z_hdlr_k_poll_signal_reset,
	[K_SYSCALL_K_POLL_SIGNAL_CHECK] = z_hdlr_k_poll_signal_check,
	[K_SYSCALL_K_POLL_SIGNAL_RAISE] = z_hdlr_k_poll_signal_raise,
	[K_SYSCALL_K_STR_OUT] = z_hdlr_k_str_out,
	[K_SYSCALL_LED_BLINK] = z_hdlr_led_blink,
	[K_SYSCALL_LED_SET_BRIGHTNESS] = z_hdlr_led_set_brightness,
	[K_SYSCALL_LED_ON] = z_hdlr_led_on,
	[K_SYSCALL_LED_OFF] = z_hdlr_led_off,
	[K_SYSCALL_PWM_PIN_SET_CYCLES] = z_hdlr_pwm_pin_set_cycles,
	[K_SYSCALL_PWM_GET_CYCLES_PER_SEC] = z_hdlr_pwm_get_cycles_per_sec,
	[K_SYSCALL_RTC_READ] = z_hdlr_rtc_read,
	[K_SYSCALL_RTC_ENABLE] = z_hdlr_rtc_enable,
	[K_SYSCALL_RTC_DISABLE] = z_hdlr_rtc_disable,
	[K_SYSCALL_RTC_SET_ALARM] = z_hdlr_rtc_set_alarm,
	[K_SYSCALL_RTC_GET_PENDING_INT] = z_hdlr_rtc_get_pending_int,
	[K_SYSCALL_SENSOR_ATTR_SET] = z_hdlr_sensor_attr_set,
	[K_SYSCALL_SENSOR_SAMPLE_FETCH] = z_hdlr_sensor_sample_fetch,
	[K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN] = z_hdlr_sensor_sample_fetch_chan,
	[K_SYSCALL_SENSOR_CHANNEL_GET] = z_hdlr_sensor_channel_get,
	[K_SYSCALL_SPI_TRANSCEIVE] = z_hdlr_spi_transceive,
	[K_SYSCALL_SPI_RELEASE] = z_hdlr_spi_release,
	[K_SYSCALL_Z_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET] = z_hdlr_z_clock_hw_cycles_per_sec_runtime_get,
	[K_SYSCALL_UART_ERR_CHECK] = z_hdlr_uart_err_check,
	[K_SYSCALL_UART_POLL_IN] = z_hdlr_uart_poll_in,
	[K_SYSCALL_UART_POLL_OUT] = z_hdlr_uart_poll_out,
	[K_SYSCALL_UART_CONFIGURE] = z_hdlr_uart_configure,
	[K_SYSCALL_UART_CONFIG_GET] = z_hdlr_uart_config_get,
	[K_SYSCALL_UART_IRQ_TX_ENABLE] = z_hdlr_uart_irq_tx_enable,
	[K_SYSCALL_UART_IRQ_TX_DISABLE] = z_hdlr_uart_irq_tx_disable,
	[K_SYSCALL_UART_IRQ_RX_ENABLE] = z_hdlr_uart_irq_rx_enable,
	[K_SYSCALL_UART_IRQ_RX_DISABLE] = z_hdlr_uart_irq_rx_disable,
	[K_SYSCALL_UART_IRQ_ERR_ENABLE] = z_hdlr_uart_irq_err_enable,
	[K_SYSCALL_UART_IRQ_ERR_DISABLE] = z_hdlr_uart_irq_err_disable,
	[K_SYSCALL_UART_IRQ_IS_PENDING] = z_hdlr_uart_irq_is_pending,
	[K_SYSCALL_UART_IRQ_UPDATE] = z_hdlr_uart_irq_update,
	[K_SYSCALL_UART_LINE_CTRL_SET] = z_hdlr_uart_line_ctrl_set,
	[K_SYSCALL_UART_LINE_CTRL_GET] = z_hdlr_uart_line_ctrl_get,
	[K_SYSCALL_UART_DRV_CMD] = z_hdlr_uart_drv_cmd,
	[K_SYSCALL_Z_ERRNO] = z_hdlr_z_errno,
	[K_SYSCALL_Z_ZEPHYR_READ_STDIN] = z_hdlr_z_zephyr_read_stdin,
	[K_SYSCALL_Z_ZEPHYR_WRITE_STDOUT] = z_hdlr_z_zephyr_write_stdout,
	[K_SYSCALL_ZEPHYR_FPUTC] = z_hdlr_zephyr_fputc,
	[K_SYSCALL_ZEPHYR_FWRITE] = z_hdlr_zephyr_fwrite,
	[K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK] = z_hdlr_z_sys_mutex_kernel_lock,
	[K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK] = z_hdlr_z_sys_mutex_kernel_unlock,
	[K_SYSCALL_ZSOCK_SOCKET] = z_hdlr_zsock_socket,
	[K_SYSCALL_ZSOCK_CLOSE] = z_hdlr_zsock_close,
	[K_SYSCALL_ZSOCK_SHUTDOWN] = z_hdlr_zsock_shutdown,
	[K_SYSCALL_ZSOCK_BIND] = z_hdlr_zsock_bind,
	[K_SYSCALL_ZSOCK_CONNECT] = z_hdlr_zsock_connect,
	[K_SYSCALL_ZSOCK_LISTEN] = z_hdlr_zsock_listen,
	[K_SYSCALL_ZSOCK_ACCEPT] = z_hdlr_zsock_accept,
	[K_SYSCALL_ZSOCK_SENDTO] = z_hdlr_zsock_sendto,
	[K_SYSCALL_ZSOCK_RECVFROM] = z_hdlr_zsock_recvfrom,
	[K_SYSCALL_ZSOCK_FCNTL] = z_hdlr_zsock_fcntl,
	[K_SYSCALL_ZSOCK_POLL] = z_hdlr_zsock_poll,
	[K_SYSCALL_ZSOCK_GETSOCKNAME] = z_hdlr_zsock_getsockname,
	[K_SYSCALL_ZSOCK_GETHOSTNAME] = z_hdlr_zsock_gethostname,
	[K_SYSCALL_ZSOCK_INET_PTON] = z_hdlr_zsock_inet_pton,
	[K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL] = z_hdlr_z_zsock_getaddrinfo_internal,
	[K_SYSCALL_BAD] = handler_bad_syscall
};
