# Lab 1: Ondřej Foltyn

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c
int main(void)
{
    pinMode(LED_BLUE, OUTPUT);
 
    while (1)
    {
    
    // show dot - DOT = 100 ms
    digitalWrite(LED_BLUE, LOW);
    _delay_ms(DOT);

    digitalWrite(LED_BLUE, HIGH);
    _delay_ms(500);

    //show dash - DASH = 300 ms
    digitalWrite(LED_BLUE, LOW);
    _delay_ms(DASH);

    digitalWrite(LED_BLUE, HIGH);
    
    // pause between letters
    _delay_ms(700);

    
    
    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![schema](https://github.com/OndraFoltyn/digital-electronics-2/blob/main/01-tools/pictures/schema.png)
