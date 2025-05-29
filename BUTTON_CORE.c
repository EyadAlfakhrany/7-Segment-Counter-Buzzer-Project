/*
 * BUTTON_CORE.c
 *
 * Created: 9/15/2023 10:06:16 AM
 *  Author: 10
 */ 

#include "BUTTON_CORE.h"

void button_init (void)
{
	clr_bit(ddrd , 2);
}

uint8  button_get_value(void)
{
	uint8 temp=0;
	uint8 button=0;
	
	button = get_bit(pind , 2);
/*	
while (temp ==0)
	{
		temp=get_bit(pind,2);
	}
	_delay_ms(10);
*/	
	return button ;
}
