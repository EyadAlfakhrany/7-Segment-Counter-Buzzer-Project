# 7-Segment Counter & Buzzer Project

**Author:** Eyad  
**Created:** September 15, 2023

## Project Overview

This project implements a 2-digit counter displayed on dual 7-segment displays with a buzzer alert at the end of the count. It includes a button for restarting the count and uses LEDs for status indication.

## Features

- Counts from 00 to 99 on two multiplexed 7-segment displays  
- Buzzer plays a specific pattern after counting completes  
- Button input to reset/restart the counter at any time  
- LED indicators for feedback  
- Simple and modular C code for AVR microcontrollers

## Hardware Requirements

- ATmega microcontroller (e.g., ATmega16/32)  
- Dual 7-segment display  
- Push button  
- Buzzer  
- LEDs  
- Appropriate resistors and wiring

## How It Works

- **Main loop:** Counts from 00 to 99 and updates the 7-segment displays by multiplexing digits.  
- **Buzzer:** When the count reaches 99, a buzzer sequence plays to indicate completion.  
- **Button:** Pressing the button restarts the counting process.  
- **LEDs:** Provide visual feedback during operation and buzzer alert.

## Code Structure

- `main()` – Initializes hardware and controls the main counting loop.  
- `display(i, c)` – Handles digit multiplexing for the two 7-segment displays.  
- `buz()` – Runs the buzzer alert pattern after counting completes.  
- `restart()` – Waits for button press to restart the counter by calling main() again.

## Notes

- The code uses a time-multiplexing technique for the 7-segment displays to show two digits using fewer pins.  
- Recursive call to `main()` in `restart()` is used for simplicity but may not be ideal for larger applications.  
- The delay functions rely on `_delay_ms()`, which depends on CPU frequency settings.  
- You may need to adjust pin definitions and seven-segment codes according to your hardware setup.

## Usage

1. Program the microcontroller with the provided code.  
2. Connect the hardware according to the pin mappings in the source code.  
3. Power the device and observe the count on the 7-segment displays.  
4. After the count reaches 99, the buzzer will sound a pattern.  
5. Press the button to reset and start counting again.

---

For questions or improvements, feel free to contact the author.

