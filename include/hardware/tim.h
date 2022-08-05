#ifndef __TIM_H__
#define __TIM_H__

#include "stm32f4xx_hal.h"

extern TIM_HandleTypeDef htim1;
extern DMA_HandleTypeDef hdma_tim1_ch1;

void tim1_pwm_pull_low(void);
void tim1_pwm_set_normal(void);
void tim1_config(void);
void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

#endif /* __TIM_H__ */

