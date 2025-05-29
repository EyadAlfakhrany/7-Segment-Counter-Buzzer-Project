/*
 * BIT_MATH.h
 *
 * Created: 9/15/2023 10:45:12 AM
 *  Author: 10
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/****************************bit math********************************/
#define set_bit(r,b)   (r|=(1<<b))
#define toggle_bit(r,b)   (r^=(1<<b))
#define clr_bit(r,b)   (r&=~(1<<b))
#define get_bit(r,b)   ((r>>b)&0x01)
/*******************************************************************/





#endif /* BIT_MATH_H_ */