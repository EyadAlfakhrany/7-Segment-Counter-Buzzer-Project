/*
 * LED_CORE.c
 *
 * Created: 9/15/2023 10:05:27 AM
 *  Author: 10
 */ 



#include "BIT_MATH.H"
#include "MCU.h"
#include "LED_CORE.H"

void led_intel(void)
{
	set_bit(ddrc,2);
}
void led_on(void)
{
	set_bit(portc,1);
}
void led_off(void)
{
	clr_bit(portc,1);
}
void led_toggle(void)
{
	toggle_bit(portc,1);
}

