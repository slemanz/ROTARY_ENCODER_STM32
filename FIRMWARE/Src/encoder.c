/*
 * encoder.c
 *
 *  Created on: Mar 27, 2024
 *      Author: sleman
 */

#include "stm32f4.h"
#include "pinout.h"
#include "encoder.h"

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
