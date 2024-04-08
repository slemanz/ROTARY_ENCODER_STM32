#include "stm32f4.h"

void encoder_counterSet(int16_t value)
{
	//uint32_t mask = 1U;
	if(value < 10 && value >= 0)
	{
		/*PIN_OUT1 = (value | ~mask);
		PIN_OUT2 = ((value >> 1) | ~mask);
		PIN_OUT3 = ((value >> 2) | ~mask);
		PIN_OUT4 = ((value >> 3) | ~mask);*/
	}
}
