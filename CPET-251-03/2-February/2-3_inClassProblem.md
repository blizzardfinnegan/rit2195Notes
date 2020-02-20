# In class coding

Write a program to use interrupts to toggle an LED connected to PD2 every second

```c
void setup()
{
    cli();
    TIMSK1 |= 0x02;// correct
    TIFR1 |= 0x02; 
	sei();
    DDRD |= 0x04;  // correct
    TCCR1A = 0x00; // wrong: 0x42;
    TCCR1B = 0x0C; // wrong: 0x8C;
    OCR1A  = 62499;// wrong. 31249 needs to be doubled
    TCNT1  = 0;    // also needed
}

ISR(TIMER1_COMPA_vect)
{
    PORTD = PORTD ^ 0x04;
  //PORTD ^= 0x04; is easier, and is acceptable
}
```

