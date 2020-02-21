# Skyler MacDougall

## 2-21-2020 In Class Problem

Assume the following setup:

```c
TCCR1A = 0b00100011;
TCCR1B = 0b00011011;
OCR1A = 9999;
OCR1B = 2499;
```

1. What mode is the timer in?

Fast PWM (OCR1A top)

2. What is the prescaler?

256

3. What is the period?

6.25s

4. What is the pulse width?

1.5625s

5. What is the duty cycle?

25%

6. On which pin will the output wave appear?

digital pin 10 (SS/OC1B/PCINT2) PB2

7. In Timer1, what is the difference between modes 5, 6, and 7?

Bit depth. Mode 5 has a bit-depth of 8; Mode 6, 9; Mode 7, 10.

8. What is the minimum PWM frequency that can be achieved with Timer0 or Timer2?

$$
\frac{1}{256\times\frac{1024}{16MHz}}=f\\
f\approx61Hz
$$

9. What is the minimum PWM frequency that can be achieved with Timer1?

$$
\frac{1}{2^{16}\times\frac{1024}{16MHz}}=f\\
f\approx238mHz
$$

10. Write the C code to achieve the following:

- [x] Use a PWM wave to control the brightness of an LED connected to pin PD6

- [x] The LED is at 10% brightness at the start of the program.
- [x] There is one pushbutton connected to INT0 and one connected to INT1.
    - [x] each time INT0 is pressed, an interrupt increases the brightness of the LED by 10%
    - [x] each time INT1 is pressed, an interrupt decreases the brightness of the LED by 10%
    - [x] the brightness cannot go below 10% or above 90%



```c
void setup(){
    TCCR0A = 0b10000011;
    TCCR0B = 0b00000001;
    OCR0A = 25;
    TCNT0 = 0;
    cli();
    EICRA = 0;
    EIMSK = 3;
    sei();
}

void loop(){
    while(1);
}

ISR(INT1_vect){
    if(OCR0A > 25){
        OCR0A -= 25; 
    }
}

ISR(INT0_vect){
    if(OCR0A < 230){
        OCR0A += 25; 
    }
}
```

11. Could you swap out the LED in the previous program and have it work the same (without changing the code)?

From my experience with servos from homework and lab; no, because the servos don’t react to a PWM signal in the intended way, and will most likely act extraneously. 