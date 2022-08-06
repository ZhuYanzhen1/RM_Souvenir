#include "main.h"

TaskHandle_t led_control_taskhandler;

void show_color_with_lightning(unsigned char lightning) {
    for (unsigned char i = 0; i < 6; ++i) {
        select_small_board(i);
        ws2812_set_all_color(lightning / 4, lightning, lightning);
        ws2812_show_color();
        delayms(10);
    }
}

void led_control(void *pvParameters) {
    (void) pvParameters;
    unsigned char lightning = 0, direction = 0;
    delayms(200);
    while (1) {
        if (direction == 0) {
            lightning = lightning + 1;
            show_color_with_lightning(lightning);
            delayms(40);
            if (lightning == 25)
                direction = 1;
        } else {
            lightning = lightning - 1;
            show_color_with_lightning(lightning);
            delayms(40);
            if (lightning == 0) {
                delayms(300);
                direction = 0;
            }
        }
    }
}

void user_task_initialize(void) {
    xTaskCreate(led_control, "LEDControl", 1024,
                NULL, 1, &led_control_taskhandler);
}

int main(void) {
    rm_lightboard_initialize(115200);
}
