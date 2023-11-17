#include "led.h"
#include "main.h"

static __IO uint32_t uwTimingDelay;
RCC_ClocksTypeDef RCC_Clocks;

void Delay(__IO uint32_t nTime);

int main(int argc, char const *argv[])
{
	/* SysTick end of count event each 10ms */
	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.HCLK_Frequency / 100);

	LED_Init(LED01_Clock, LED01_GPIO, LED01_GPIO_Pin);
	while (1) {
		LED_Set(LED01_GPIO, LED01_GPIO_Pin, LED_ON);
		Delay(500);
		LED_Set(LED01_GPIO, LED01_GPIO_Pin, LED_OFF);
		Delay(500);
	}
	return 0;
}

/**
 * @brief  Inserts a delay time.
 * @param  nTime: 单位 10ms
 * @retval None
 */
void Delay(__IO uint32_t nTime)
{
	uwTimingDelay = nTime;

	while (uwTimingDelay != 0)
		;
}

/**
 * @brief  Decrements the TimingDelay variable.
 * @param  None
 * @retval None
 */
void TimingDelay_Decrement(void)
{
	if (uwTimingDelay != 0x00) {
		uwTimingDelay--;
	}
}
