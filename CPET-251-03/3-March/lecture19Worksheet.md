1.  Using the ADC notes and the ATmega328 datasheet, write the code for the following:
    -   assume an arduino set up with a potentiometer on PC3
    -   initialize the pin
    -   in `setup()` function, initialize the ADC by writing to its 3 registers. It should be in free-running mode. 
    -   In `loop()` print the ADC value to the serial terminal each time a conversion completes, you can use polling to determine when the conversion is completed.

```c
void setup()
{
    DDRC   |= 0x04;
    ADMUX   = 0x43;
    ADCSRA  = 0xAD;
    ADCSRA |= 0x40;
    Serial.begin(9600);
}

void loop()
{
    while(1){}
}
ISR(ADC_vect)
{
    byte tempVar = ADCL;
    Serial.println(tempVar);
}
```



2.  Starting from the above code, write a second program that reads the potentiometer every one second (use a timer interrupt as a trigger)

```c
void setup()
{
    DDRC   |= 0x04;
    ADMUX   = 0x43;
    ADCSRA  = 0xAD;
    TCCR1A  = 0x02;
    TCCR1B  = 0x1B;
    ICR1    = 62499;
    Serial.begin(9600);
}

void loop()
{
    while(1){}
}
ISR(TIMER1_OVF_vect)
{
    ADCSRA |= 0x40;
    while(ADCSRA & 0x10){} 
    byte tempVar = ADCL;
    Serial.println(tempVar);
}
```

