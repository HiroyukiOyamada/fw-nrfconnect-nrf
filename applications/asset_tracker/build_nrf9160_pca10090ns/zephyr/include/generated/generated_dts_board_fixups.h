/* May only be included by generated_dts_board.h */

/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */

#define DT_NUM_IRQ_PRIO_BITS		DT_ARM_V8M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_NUM_MPU_REGIONS		DT_ARM_ARMV8M_MPU_E000ED90_ARM_NUM_MPU_REGIONS

#define DT_ADC_0_NAME			DT_NORDIC_NRF_SAADC_ADC_0_LABEL

#define DT_UART_0_NAME			DT_NORDIC_NRF_UARTE_UART_0_LABEL
#define DT_UART_1_NAME			DT_NORDIC_NRF_UARTE_UART_1_LABEL
#define DT_UART_2_NAME			DT_NORDIC_NRF_UARTE_UART_2_LABEL
#define DT_UART_3_NAME			DT_NORDIC_NRF_UARTE_UART_3_LABEL

#define DT_FLASH_DEV_NAME \
	DT_NORDIC_NRF91_FLASH_CONTROLLER_FLASH_CONTROLLER_LABEL

#define DT_GPIO_P0_DEV_NAME		DT_NORDIC_NRF_GPIO_GPIO_0_LABEL

#define DT_I2C_0_NAME			DT_NORDIC_NRF_I2C_I2C_0_LABEL
#define DT_I2C_1_NAME			DT_NORDIC_NRF_I2C_I2C_1_LABEL
#define DT_I2C_2_NAME			DT_NORDIC_NRF_I2C_I2C_2_LABEL
#define DT_I2C_3_NAME			DT_NORDIC_NRF_I2C_I2C_3_LABEL

#define DT_SPI_0_NAME			DT_NORDIC_NRF_SPI_SPI_0_LABEL
#define DT_SPI_1_NAME			DT_NORDIC_NRF_SPI_SPI_1_LABEL
#define DT_SPI_2_NAME			DT_NORDIC_NRF_SPI_SPI_2_LABEL
#define DT_SPI_3_NAME			DT_NORDIC_NRF_SPI_SPI_3_LABEL

#define DT_WDT_0_NAME                   DT_NORDIC_NRF_WATCHDOG_WDT_0_LABEL

#define DT_TIMER_0_NAME                 DT_NORDIC_NRF_TIMER_TIMER_0_LABEL
#define DT_TIMER_1_NAME                 DT_NORDIC_NRF_TIMER_TIMER_1_LABEL
#define DT_TIMER_2_NAME                 DT_NORDIC_NRF_TIMER_TIMER_2_LABEL

/* End of SoC Level DTS fixup file */
