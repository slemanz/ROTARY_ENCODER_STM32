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

	int16_t pos_encoder = encoder_read();

	while(1)
	{
		pos_encoder = encoder_read();
		if(pos_encoder == 0)
		{
			LED1 = 1; LED2 = 0; LED3 = 0; LED4 = 0;
		}else if(pos_encoder == 1)
		{
			LED1 = 0; LED2 = 1; LED3 = 0; LED4 = 0;
		}else if(pos_encoder == 2)
		{
			LED1 = 0; LED2 = 0; LED3 = 1; LED4 = 0;
		}else if(pos_encoder == 3)
		{
			LED1 = 0; LED2 = 0; LED3 = 0; LED4 = 1;
		}


		//LED1 = 1;


	}
}
