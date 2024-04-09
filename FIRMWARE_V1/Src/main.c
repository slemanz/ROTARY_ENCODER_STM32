#include "stm32f4.h"

void delay(void)
{
	for(uint32_t i; i < 500000; i++);
}

int main(void)
{
	pinout_init();
	D0 = 0;
	D1 = 0;
	D2 = 0;
	D3 = 0;


	while(1)
	{
		for(uint16_t i = 0; i < 10; i++)
		{
			encoder_counterSet(i);
			delay();
		}
	}
}
