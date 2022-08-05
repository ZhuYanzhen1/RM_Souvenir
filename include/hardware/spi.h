#ifndef __SPI_H__
#define __SPI_H__

#include "stm32f4xx_hal.h"

extern SPI_HandleTypeDef hspi2;

unsigned char spi2_readwrite_byte(unsigned char tx_data);
void spi2_config(void);

#endif /* __SPI_H__ */

