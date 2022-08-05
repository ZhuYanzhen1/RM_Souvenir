#ifndef MYLIB_WS28XX
#define MYLIB_WS28XX

void ws2812_show_color(void);
void ws2812_set_pixel_color(unsigned short int index, unsigned char r, unsigned char g, unsigned char b);
void ws2812_set_all_color(unsigned char r, unsigned char g, unsigned char b);

#endif

