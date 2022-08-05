#ifndef __ADC_H__
#define __ADC_H__

#include "stm32f4xx_hal.h"

extern ADC_HandleTypeDef hadc1;
extern volatile unsigned short adc_result;

void adc1_config(void);

#endif /* __ADC_H__ */

