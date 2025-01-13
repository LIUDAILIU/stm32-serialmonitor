#include "stm32f10x.h"                  // Device header
#include "USART.h"
#include "MyI2C.h"
#include "LED.h"

int main(void)
{
	MyI2C_Init();
	
	MyI2C_SendByte(0x78);
	MyI2C_Start();
	uint8_t Ack = MyI2C_ReceiveByte();
	MyI2C_Stop();
	
	if(Ack==0)
	{
		LED_On();
	}
	else
	{
		LED_On();
	}
	
	while (1)
	{
		
	}
}
