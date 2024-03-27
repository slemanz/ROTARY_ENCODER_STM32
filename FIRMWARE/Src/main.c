/*******************************************************************************
 * @author         : William Sleman - visit www.slemanz.com
 * @brief          : Main program body
 ******************************************************************************/

#include "stm32f4.h"
#include "pinout.h"
#include "pin_interface.h"
#include "encoder.h"


int main(void)
{
	pinout_init();

	int16_t pos = encoder_read(), pos_before = encoder_read(), diff, value;



	while(1)
	{
		pos = encoder_read();
		diff = pos_before - pos;

		 // turned clockwise
		if (((diff == -1) || (diff == 3))) {
			pos_before = pos;
			if (value < 20) { value++; }

		// turned counter-clockwise
		} else if (((diff == 1) || (diff == -3))) {
			pos_before = pos;
			if (value > 0) { value--; }

		// step missed
		} else if ((diff == 2) || (diff == -2)) {

		}

		if((value/4) == 0)
		{
			LED1 = 1; LED2 = 0; LED3 = 0; LED4 = 0;
		}else if((value/4) == 1)
		{
			LED1 = 0; LED2 = 1; LED3 = 0; LED4 = 0;
		}else if((value/4) == 2)
		{
			LED1 = 0; LED2 = 0; LED3 = 1; LED4 = 0;
		}else if((value/4) == 3)
		{
			LED1 = 0; LED2 = 0; LED3 = 0; LED4 = 1;
		}


		//LED1 = 1;


	}
}
