/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_PIMORONI_PLASMA2040_H
#define _BOARDS_PIMORONI_PLASMA2040_H

// For board detection
#define PIMORONI_PLASMA2040

// --- BOARD SPECIFIC ---
#ifndef PLASMA2040_SW_A_PIN
#define PLASMA2040_SW_A_PIN 12
#endif

#ifndef PLASMA2040_SW_B_PIN
#define PLASMA2040_SW_B_PIN 13
#endif

#ifndef PLASMA2040_CLK_PIN
#define PLASMA2040_CLK_PIN 14
#endif

#ifndef PLASMA2040_DATA_PIN
#define PLASMA2040_DATA_PIN 15
#endif

#ifndef PLASMA2040_LED_R_PIN
#define PLASMA2040_LED_R_PIN 16
#endif

#ifndef PLASMA2040_LED_G_PIN
#define PLASMA2040_LED_G_PIN 17
#endif

#ifndef PLASMA2040_LED_B_PIN
#define PLASMA2040_LED_B_PIN 18
#endif

#ifndef PLASMA2040_I2C
#define PLASMA2040_I2C 0
#endif

#ifndef PLASMA2040_INT_PIN
#define PLASMA2040_INT_PIN 19
#endif

#ifndef PLASMA2040_SDA_PIN
#define PLASMA2040_SDA_PIN 20
#endif

#ifndef PLASMA2040_SCL_PIN
#define PLASMA2040_SCL_PIN 21
#endif

#ifndef PLASMA2040_USER_SW_PIN
#define PLASMA2040_USER_SW_PIN 23
#endif

#ifndef PLASMA2040_A0_PIN
#define PLASMA2040_A0_PIN 26
#endif

#ifndef PLASMA2040_A1_PIN
#define PLASMA2040_A1_PIN 27
#endif

#ifndef PLASMA2040_A2_PIN
#define PLASMA2040_A2_PIN 28
#endif

#ifndef PLASMA2040_NUM_ADC_PINS
#define PLASMA2040_NUM_ADC_PINS 3
#endif

#ifndef PLASMA2040_CURRENT_SENSE_PIN
#define PLASMA2040_CURRENT_SENSE_PIN 29
#endif

// --- UART ---
// no PICO_DEFAULT_UART
// no PICO_DEFAULT_UART_TX_PIN
// no PICO_DEFAULT_UART_RX_PIN

// --- LED ---
// Included so basic examples will work, and set it to the green LED
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN PLASMA2040_LED_G_PIN
#endif
// no PICO_DEFAULT_WS2812_PIN

#ifndef PICO_DEFAULT_LED_PIN_INVERTED
#define PICO_DEFAULT_LED_PIN_INVERTED 1
#endif

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C PLASMA2040_I2C
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN PLASMA2040_SDA_PIN
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN PLASMA2040_SCL_PIN
#endif

// --- SPI ---
// no PICO_DEFAULT_SPI
// no PICO_DEFAULT_SPI_SCK_PIN
// no PICO_DEFAULT_SPI_TX_PIN
// no PICO_DEFAULT_SPI_RX_PIN
// no PICO_DEFAULT_SPI_CSN_PIN

// --- FLASH ---
#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (2 * 1024 * 1024)
#endif

// All boards have B1 RP2040
#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED 0
#endif

#endif
