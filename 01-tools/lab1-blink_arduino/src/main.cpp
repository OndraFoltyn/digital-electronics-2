/***********************************************************************
 * 
 * Blink a LED in Arduino-style and use function from the delay library.
 * ATmega328P (Arduino Uno), 16 MHz, PlatformIO
 *
 * Copyright (c) 2022 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/


/* Defines -----------------------------------------------------------*/
<<<<<<< HEAD
//#define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
                        // is connected

#define LED_BLUE PB0                  
// #define SHORT_DELAY 500 // Delay in milliseconds
=======
// #define LED_GREEN PB5   // PB5 is AVR pin where green on-board LED 
                        // is connected

#define LED_BLUE PB0                  
#define DOT 100 // Delay in milliseconds
#define DASH 300
>>>>>>> 058b3e19441753300f9ad94b9371831d31fbf54a
#ifndef F_CPU
# define F_CPU 16000000 // CPU frequency in Hz required for delay funcs
#endif

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>     // AVR device-specific IO definitions
#include <util/delay.h> // Functions for busy-wait delay loops


// -----
// This part is needed to use Arduino functions but also physical pin
// names. We are using Arduino-style just to simplify the first lab.
#include "Arduino.h"
<<<<<<< HEAD
//#define PB5 13          // In Arduino world, PB5 is called "13"
#define PB0 8 
=======
// #define PB5 13          // In Arduino world, PB5 is called "13"
#define PB0 8
>>>>>>> 058b3e19441753300f9ad94b9371831d31fbf54a
// -----


/* Function definitions ----------------------------------------------*/
/**********************************************************************
 * Function: Main function where the program execution begins
 * Purpose:  Toggle one LED and use delay library.
 * Returns:  none
 **********************************************************************/
/* int main(void)
{
    pinMode(LED_BLUE, OUTPUT);
 
    while (1)
    {
    
    // show dot
    digitalWrite(LED_BLUE, LOW);
    _delay_ms(DOT);

    digitalWrite(LED_BLUE, HIGH);
    _delay_ms(500);

    //show dash 
    digitalWrite(LED_BLUE, LOW);
    _delay_ms(DASH);

    digitalWrite(LED_BLUE, HIGH);
    
    // pause between letters
    _delay_ms(700);

    
    
    }

    // Will never reach this
    return 0;
}

*/
#define DOT 200
#define DASH 800

int main(void)
{
  uint8_t led_value = LOW;
    // Set pin where on-board LED is connected as output
    pinMode(LED_BLUE, OUTPUT);

    // Infinite loop
    while (1)
    {
        // Generate a lettre `A` Morse code
      
        digitalWrite(LED_BLUE, LOW);
        _delay_ms(DOT);

        if (led_value == LOW)
          led_value = HIGH;
        else
          led_value = LOW;
          
        digitalWrite(LED_BLUE, LOW);
        _delay_ms(DASH);

      
        

    }

    // Will never reach this
    return 0;
}