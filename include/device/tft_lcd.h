//
// Created by LaoZhu on 2022/7/11.
//

#ifndef RM_LIGHTBOARD_DEVICE_TFT_LCD_H_
#define RM_LIGHTBOARD_DEVICE_TFT_LCD_H_

void lcd_config();
void lcd_set_direction(unsigned char mode);
void lcd_set_address(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);

#endif //RM_LIGHTBOARD_DEVICE_TFT_LCD_H_
