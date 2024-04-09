#include "stm32f4.h"

int16_t encoder_read(void)
{
	uint8_t encA = GPIO_ReadFromInputPin(PORT_ENCA, PIN_ENCA);
	uint8_t encB = GPIO_ReadFromInputPin(PORT_ENCB, PIN_ENCB);

	// gray code
	if (encA == 0 && encB == 0) {
	    return 0;
	} else if (encA == 0 && encB == 1) {
        return 1;
	} else if (encA == 1 && encB == 1) {
		return 2;
	} else {
		return 3;
	}
}

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
