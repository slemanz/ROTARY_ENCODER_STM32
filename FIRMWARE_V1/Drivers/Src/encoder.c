#include "stm32f4.h"

void encoder_counterSet(int16_t value)
{
	uint32_t mask = 1U;
	if(value < 10 && value >= 0)
	{
		D0 = (value | ~mask);
		D1 = ((value >> 1) | ~mask);
		D2 = ((value >> 2) | ~mask);
		D3 = ((value >> 3) | ~mask);
	}
}
