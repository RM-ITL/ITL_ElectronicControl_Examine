#include "stm32f4xx.h"                  // Device header
#include "gpio.h"

void LED_Control(uint8_t data)
{
	HAL_GPIO_WritePin(LED_B_GPIO_Port,LED_B_Pin,((data & 1) == 0) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_G_GPIO_Port,LED_G_Pin,((data & 2) == 0) ? GPIO_PIN_SET : GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_R_GPIO_Port,LED_R_Pin,((data & 4) == 0) ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

