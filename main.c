/*
 * n1.c
 *
 * Created: 9/15/2023 6:01:24 AM
 * Author : Eyad
 */

#include "led_core.h"
#include "BUTTON_CORE.h"

// Function to display two digits on a 2-digit 7-segment display
/*void display(int i, int c)
{
    uint8 x = 0;
    while (x < 10) // Refresh display 10 times for persistence of vision
    {
        set_bit(portc, 7);         // Enable first digit
        clr_bit(portc, 6);         // Disable second digit
        porta = seven_segmant[i];  // Send first digit segment pattern
        _delay_ms(10);

        clr_bit(portc, 7);         // Disable first digit
        set_bit(portc, 6);         // Enable second digit
        porta = seven_segmant[c];  // Send second digit segment pattern
        _delay_ms(10);

        x++;
    }

    return 0; // NOTE: this is technically incorrect in a void function
}
*/
// Function to activate buzzer in a pattern along with LEDs
void buz(void)
{
    int i = 0;
    while (i < 5) // Repeat the buzzer pattern 5 times
    {
        ddrc = 0x02; // Set Port C pin 1 as output

        set_bit(portc, 5); // Turn on buzzer
        set_bit(portc, 0); // Turn on LED at pin C0
        _delay_ms(750);
        clr_bit(portc, 5);
        clr_bit(portc, 0);
        restart(); // Wait for button to restart
        _delay_ms(100);
        restart();

        set_bit(portc, 5);
        set_bit(portc, 1);
        _delay_ms(750);
        clr_bit(portc, 5);
        clr_bit(portc, 1);
        restart();
