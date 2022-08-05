#ifndef __USART_H__
#define __USART_H__

#include "stm32f4xx_hal.h"

extern UART_HandleTypeDef huart1;

void uart1_config(unsigned int baudrate);

#endif /* __USART_H__ */

