#pragma once

// Pins confirmed from .history/M5Tab5-UserDemo BSP sources.

#define I2C_SCL 32
#define I2C_SDA 31

// External I2C (if needed by modules)
#define EXT_I2C_SCL 54
#define EXT_I2C_SDA 53

// Audio I2S
#define I2S_BCLK 27
#define I2S_MCLK 30
#define I2S_LRCLK 29
#define I2S_DOUT 26
#define I2S_DIN 28

// Display backlight
#define TFT_BL 22

// SDMMC (4-bit)
#define SDMMC_CLK 43
#define SDMMC_CMD 44
#define SDMMC_D0 39
#define SDMMC_D1 40
#define SDMMC_D2 41
#define SDMMC_D3 42

// Camera clock output
#define CAM_XCLK 36

// GNSS (Module GNSS on M5-Bus)
#define GPS_BAUDRATE 38400
#define GPS_TX_PIN 6
#define GPS_RX_PIN 7

// LoRa (Module LoRa433 v1.1, SX1278)
#define LORA_SCK 5
#define LORA_MISO 19
#define LORA_MOSI 18
#define LORA_CS 35
#define LORA_RESET 45
#define LORA_DIO0 16
#define USE_RF95

// TODO: Fill in touch/button pins once confirmed.
