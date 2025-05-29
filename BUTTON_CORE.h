/*
 * BUTTON_CORE.h
 *
 * Created: 9/15/2023 10:42:19 AM
 *  Author: 10
 */ 


#ifndef BUTTON_CORE_H_
#define BUTTON_CORE_H_
#include "bit_math.h"
#include "MCU.H"
#define F_CPU 16000000U
#include <util/delay.h>
void button_init (void);
uint8  button_get_value(void);







#endif /* BUTTON_CORE_H_ */