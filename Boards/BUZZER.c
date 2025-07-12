#include "stm32f4xx.h"                  // Device header
#include "tim.h"

void BUZZER_OPEN(uint16_t compare)
{
	__HAL_TIM_SetCompare(&htim4,TIM_CHANNEL_3,compare);
	
}

void BUZZER_OFF(void)
{
	__HAL_TIM_SetCompare(&htim4,TIM_CHANNEL_3,0);
}
