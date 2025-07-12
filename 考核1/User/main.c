#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Key.h"
#include "LED.h"
uint8_t KeyNum;			//定义用于接收键码的变量
float Angle;			//定义角度变量

int main(void)
{
	/*模块初始化*/
	OLED_Init();		//OLED初始化
	LED_Init();
	Key_Init();			//按键初始化

uint8_t KeyNum=0;
	while (1)
	{
					//获取按键键码
		KeyNum = Key_GetNum();
		if (KeyNum == 1)				//按键1按下
		{
			GPIO_ResetBits(GPIOA, GPIO_Pin_1);
						OLED_ShowNum(1, 7, KeyNum, 3);
				
			}
		if (KeyNum == 2)			
		{
			
				GPIO_ResetBits(GPIOA, GPIO_Pin_2);
			OLED_ShowNum(1, 7, KeyNum, 3);
		}
			
				if (KeyNum == 3)				//按键1按下
		{
		GPIO_SetBits(GPIOA, GPIO_Pin_1);	
		GPIO_SetBits(GPIOA, GPIO_Pin_2);	
			OLED_ShowNum(1, 7, KeyNum, 3);
			
			}

}

}
