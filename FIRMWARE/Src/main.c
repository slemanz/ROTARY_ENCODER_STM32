/*******************************************************************************
 * @author         : William Sleman - visit www.slemanz.com
 * @brief          : Main program body
 ******************************************************************************/

#include "stm32f4.h"
#include "pinout.h"


int main(void)
{
	pinout_init();

	while(1)
	{
		if(GPIO_ReadFromInputPin(PORT_ENCA, PIN_ENCA))
		{
			GPIO_WriteToOutputPin(PORT_LED1, PIN_LED1, GPIO_PIN_SET);
		}else
		{
			GPIO_WriteToOutputPin(PORT_LED1, PIN_LED1, GPIO_PIN_RESET);
		}


		if(GPIO_ReadFromInputPin(PORT_ENCB, PIN_ENCB))
		{
			GPIO_WriteToOutputPin(PORT_LED2, PIN_LED2, GPIO_PIN_SET);
		}else
		{
			GPIO_WriteToOutputPin(PORT_LED2, PIN_LED2, GPIO_PIN_RESET);
		}
	}
}
