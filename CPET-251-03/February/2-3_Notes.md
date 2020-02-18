# Interrupts

Better than polling, because it uses less resources. But building an interrupt structure means we need a priority structure.



Lower value = interrupt faster, with higher priority

reset has the highest priority



## Interrupt steps

- current program halts
    - registers stored
- program execution is passed to an Interrupt Routine (ISR)
    - each interrupt capable event has an ISR
- When the ISR completes execution
    - interrupt is turned off
    - registers are restored
    - original program picks up where it was

## Programmer’s job

- Write to the ISR
    - its a function, but not explicitly called
    - `sei()` for turning on global interrupts
    - `cli()` for turning off global interrupts



# Programming Interrupts

3 enables for interrupt;

- overflow interrupt (`TIMSKn0`)
- OCA interrupt (`TIMSKn1`)
- OCB (`TIMSKn2`)



```c
void setup(){
    cli();//turn off global interrupts
    //set interrupt flag(s) in TIMSKn
    sei();//turn on global interrupts again
}

ISR()//vector name (slide 13)
    {
     //K.I.S.S. Minimize lines   
    }

void loop(){
    
}
```

## In class coding

Write a program to use interrupts to toggle an LED connected to PD2 every second

```c
void setup()
{
    cli();
    TIMSK1 |= 0x02;
    TIFR1 |= 0x02;
	sei();
    DDRD |= 0x04;
    TCCR1A = 0x42;
    TCCR1B = 0x8C;
    OCR1A  = 31249;
    
}

ISR(TIMER1_COMPA_vect)
{
    PORTD = PORTD ^ 0x04;
}
```

