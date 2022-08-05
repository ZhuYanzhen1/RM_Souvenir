#include "main.h"

TaskHandle_t led_control_taskhandler;

void led_control(void *pvParameters) {
    (void) pvParameters;
    unsigned char lightning = 0;
    delayms(200);
    while (1) {
        lightning = (lightning + 1) % 110;
        for (unsigned char i = 0; i < 6; ++i) {
            select_small_board(i);
            ws2812_set_all_color(lightning / 4, lightning, lightning);
            ws2812_show_color();
            delayms(10);
        }
        delayms(4);

        if (lightning > 80) {
            while (1) {
                lightning = lightning - 1;
                for (unsigned char i = 0; i < 6; ++i) {
                    select_small_board(i);
                    ws2812_set_all_color(lightning / 4, lightning, lightning);
                    ws2812_show_color();
                    delayms(5);
                }
                delayms(4);
                if (lightning == 0)
                    break;
            }
            delayms(100);
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
