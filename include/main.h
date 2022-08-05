#ifndef __MAIN_H
#define __MAIN_H

//////////////////// System ////////////////////
#include "system.h"
#include "printf.h"
#include "FreeRTOS.h"
#include "task.h"

//////////////////// Device ////////////////////
#include "tft_lcd.h"
#include "gui.h"
#include "eeprom.h"
#include "ws2812.h"
#include "select.h"

//////////////////// Shell ////////////////////
#include "shell.h"

void user_task_initialize(void);
void rm_lightboard_initialize(unsigned int baudrate);

#endif /* __MAIN_H */
