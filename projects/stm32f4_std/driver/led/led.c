#include "led.h"

void LED_Init(uint32_t LED_Clock, GPIO_TypeDef *LED_GPIO, uint16_t LED_Pin)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_AHB1PeriphClockCmd(LED_Clock, ENABLE);

	// 指定结构体成员变量
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;

	GPIO_Init(LED_GPIO, &GPIO_InitStructure);
	// 设置 LED 的默认状态
	GPIO_SetBits(LED_GPIO, LED_Pin);
}
