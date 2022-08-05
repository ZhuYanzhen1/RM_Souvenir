#include "main.h"
#include "stm32f4xx_it.h"
#include "usart.h"
#include "tim.h"

extern DMA_HandleTypeDef hdma_adc1;
extern TIM_HandleTypeDef htim4;

void NMI_Handler(void) {
    while (1);
}

void HardFault_Handler(void) {
    while (1);
}

void MemManage_Handler(void) {
    while (1);
}

void BusFault_Handler(void) {
    while (1);
}

void UsageFault_Handler(void) {
    while (1);
}

void DebugMon_Handler(void) {

}

void TIM4_IRQHandler(void) {
    HAL_TIM_IRQHandler(&htim4);
}

void USART1_IRQHandler(void) {
    HAL_UART_IRQHandler(&huart1);
}

void DMA2_Stream0_IRQHandler(void) {
    HAL_DMA_IRQHandler(&hdma_adc1);
}

void DMA2_Stream3_IRQHandler(void) {
    HAL_DMA_IRQHandler(&hdma_tim1_ch1);
}
