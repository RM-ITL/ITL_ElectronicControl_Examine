#include "stm32f10x.h"                  // Device header
#include "pwm.h"

/**
  * ��    ���������ʼ��
  * ��    ������
  * �� �� ֵ����
  */
void Servo_Init(void)
{
	PWM_Init();									//��ʼ������ĵײ�PWM
}

/**
  * ��    ����������ýǶ�
  * ��    ����Angle Ҫ���õĶ���Ƕȣ���Χ��0~180
  * �� �� ֵ����
  */
void Servo_SetAngle(float Angle)
{
	PWM_SetCompare2(Angle / 180 * 2000 + 500);	//����ռ�ձ�
												//���Ƕ����Ա任����Ӧ�����Ҫ���ռ�ձȷ�Χ��
}
