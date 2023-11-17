#ifndef __LED_H__
#define __LED_H__
#include "stm32f4xx_gpio.h"
#include "stm32f4xx.h"

#define LED01_GPIO     GPIOI
#define LED01_GPIO_Pin GPIO_Pin_0
#define LED01_Clock    RCC_AHB1Periph_GPIOI
#define LED02_GPIO     GPIOF
#define LED02_GPIO_Pin GPIO_Pin_3
#define LED02_Clock    RCC_AHB1Periph_GPIOF

void LED_Init(uint32_t LED_Clock, GPIO_TypeDef *LED_GPIO, uint16_t LED_Pin);

#endif
