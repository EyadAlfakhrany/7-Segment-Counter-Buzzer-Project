/*
 * MCU.h
 *
 * Created: 9/15/2023 10:43:55 AM
 *  Author: 10
 */ 


#ifndef MCU_H_
#define MCU_H_
#include "STD.H"

/****************************GPIO REGISTER********************************/
#define pina *(volatile uint8*)(0x39)
#define ddra *(volatile uint8*)(0x3a)
#define porta *(volatile uint8*)(0x3b)

#define pinb *(volatile uint8*)(0x36)
#define ddrb *(volatile uint8*)(0x37)
#define portb *(volatile uint8*)(0x38)


#define pinc *(volatile uint8*)(0x33)
#define ddrc *(volatile uint8*)(0x34)
#define portc *(volatile uint8*)(0x35)

#define pind *(volatile uint8*)(0x30)
#define ddrd *(volatile uint8*)(0x31)
#define portd *(volatile uint8*)(0x32)
/*******************************************************************/






#endif /* MCU_H_ */