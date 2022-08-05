#ifndef __EEPROM_H
#define __EEPROM_H

#include "stm32f4xx_hal.h"

unsigned short flash_program_words(unsigned int *data, unsigned short length);
void flash_read_words(unsigned int *data, unsigned short length);

#endif
