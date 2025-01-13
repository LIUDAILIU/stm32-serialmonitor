#include "stm32f10x.h"          
void LED_Init()
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void LED_On()
{
	GPIO_SetBits(GPIOA,GPIO_Pin_1);
}

void LED_Off()
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_1);
}
