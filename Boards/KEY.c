#include "stm32f4xx.h"                  // Device header

uint8_t Key_GetNum(void)
{
	uint8_t KeyNum = 0;
	
	if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) == 0)
	{
		HAL_Delay(20);
		while(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0) == 0);
		HAL_Delay(20);
		KeyNum = 1;
		
	}
	return KeyNum;
}
