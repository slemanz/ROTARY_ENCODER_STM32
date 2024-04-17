#include "stm32f4.h"


int main(void)
{
	pinout_init();

	int16_t pos = encoder_read(), pos_before = encoder_read(), diff, value;

	int16_t max_counter = 15;
	int16_t enc_p = 6;  // prescale encoder



	while(1)
	{
		pos = encoder_read();
		diff = pos_before - pos;

		 // turning clockwise
		if (((diff == -1) || (diff == 3))) {
			pos_before = pos;
			if (value > 0) { value--; }

		// turning counter-clockwise
		} else if (((diff == 1) || (diff == -3))) {
			pos_before = pos;
			if (value < max_counter*enc_p) { value++; }


		// step missed
		} else if ((diff == 2) || (diff == -2)) {

		}

		if(!SWITCH){value = 0*enc_p;}


		encoder_counterSet(value/enc_p);
	}
}
