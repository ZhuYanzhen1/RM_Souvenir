//
// Created by LaoZhu on 2022/7/11.
//

#ifndef RM_LIGHTBOARD_DEVICE_GUI_H_
#define RM_LIGHTBOARD_DEVICE_GUI_H_

#include "color.h"

void gui_config(void);
void gui_clear_screan(unsigned short color);
void gui_printf(unsigned char row,
                unsigned char column,
                unsigned int dcolor,
                unsigned int bgcolor,
                const char *fmt,
                ...);
void gui_put_slogan(unsigned char x,
                    unsigned char line,
                    unsigned int dcolor,
                    unsigned int bgcolor);

#endif //RM_LIGHTBOARD_DEVICE_GUI_H_
