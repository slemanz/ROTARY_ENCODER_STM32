#ifndef INC_ENCODER_H_
#define INC_ENCODER_H_

#include "stm32f4.h"

int16_t encoder_read(void); // returns 0 to 3
void encoder_counterSet(int16_t value);


#endif /* INC_ENCODER_H_ */
