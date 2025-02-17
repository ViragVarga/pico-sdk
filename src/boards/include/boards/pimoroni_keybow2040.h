/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_PIMORONI_KEYBOW2040_H
#define _BOARDS_PIMORONI_KEYBOW2040_H

// For board detection
#define PIMORONI_KEYBOW2040

// --- BOARD SPECIFIC ---
#ifndef KEYBOW2040_I2C_SDA_PIN
#define KEYBOW2040_I2C_SDA_PIN 4
#endif

#ifndef KEYBOW2040_I2C_SCL_PIN
#define KEYBOW2040_I2C_SCL_PIN 5
#endif

#ifndef KEYBOW2040_I2C_INT_PIN
#define KEYBOW2040_I2C_INT_PIN 3
#endif

#ifndef KEYBOW2040_USER_SW_PIN
#define KEYBOW2040_USER_SW_PIN 23
#endif

#ifndef KEYBOW2040_SW0_PIN
#define KEYBOW2040_SW0_PIN 21
#endif

#ifndef KEYBOW2040_SW1_PIN
#define KEYBOW2040_SW1_PIN 20
#endif

#ifndef KEYBOW2040_SW2_PIN
#define KEYBOW2040_SW2_PIN 19
#endif

#ifndef KEYBOW2040_SW3_PIN
#define KEYBOW2040_SW3_PIN 18
#endif

#ifndef KEYBOW2040_SW4_PIN
#define KEYBOW2040_SW4_PIN 17
#endif

#ifndef KEYBOW2040_SW5_PIN
#define KEYBOW2040_SW5_PIN 16
#endif

#ifndef KEYBOW2040_SW6_PIN
#define KEYBOW2040_SW6_PIN 15
#endif

#ifndef KEYBOW2040_SW7_PIN
#define KEYBOW2040_SW7_PIN 14
#endif

#ifndef KEYBOW2040_SW8_PIN
#define KEYBOW2040_SW8_PIN 13
#endif

#ifndef KEYBOW2040_SW9_PIN
#define KEYBOW2040_SW9_PIN 12
#endif

#ifndef KEYBOW2040_SW10_PIN
#define KEYBOW2040_SW10_PIN 11
#endif

#ifndef KEYBOW2040_SW11_PIN
#define KEYBOW2040_SW11_PIN 10
#endif

#ifndef KEYBOW2040_SW12_PIN
#define KEYBOW2040_SW12_PIN 9
#endif

#ifndef KEYBOW2040_SW13_PIN
#define KEYBOW2040_SW13_PIN 8
#endif

#ifndef KEYBOW2040_SW14_PIN
#define KEYBOW2040_SW14_PIN 7
#endif

#ifndef KEYBOW2040_SW15_PIN
#define KEYBOW2040_SW15_PIN 6
#endif

#ifndef KEYBOW2040_NUM_SWITCHES_PINS
#define KEYBOW2040_NUM_SWITCHES_PINS 16
#endif

// --- UART ---
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif

#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif

#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// --- LED ---
// no PICO_DEFAULT_LED_PIN
// no PICO_DEFAULT_WS2812_PIN

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 0
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN KEYBOW2040_I2C_SDA_PIN
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN KEYBOW2040_I2C_SCL_PIN
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
