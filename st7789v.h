/*
 * Free software, check the license, do what you want with it.
 */

#ifndef ST7789V_H
#define ST7789V_H

#include "pico/stdlib.h"
#include "hardware/spi.h"

// 240x320
#define ST7789V_WIDTH 240
#define ST7789V_HEIGHT 320
#define ST7789V_DC_PIN 16
#define ST7789V_RST_PIN 20
#define ST7789V_CS_PIN 17

// API
void st7789v_init(spi_inst_t *spi, uint8_t cs_pin, uint8_t sck_pin, uint8_t mosi_pin);
void st7789v_clear(void);
void st7789v_update(void);
void st7789v_blink(uint16_t loops);
void st7789v_write_text(uint8_t textBuff[], uint8_t row, uint8_t column);

#endif