# Modes of Operation review

- **==Normal mode==**
    - simplest mode
    - counter counts to 255/2^16^ and then rolls over
    - used most when you’re counting ticks or timing an event
- **==CTC==**
    - counter cleared when `TCNT==OCRA | OCRB`
    - used to create waveforms and interrupts
- **==Fast PWM==**
    - creates a waveform with fixed frequency and variable duty cycle
    - Toggles high and low quickly enough that only an average voltage is detected

# Timer configuration checklist

- [ ] consult datasheet registers

- [ ] decide the timer to use

    - [ ] default to T1
    - [ ] if 8 bits is fine, use T0 or T2

- [ ] Decide which mode you need

    - counting or timing?
        - [ ] normal mode (no configuration)

    - Are you using the timer as a time base or frequency generator?
        - [ ] Use CTC mode
    - Are using the timer for PWM?
        - [ ] PWM mode… duh

- [ ] Direct output pins?

    - [ ] `COMA`
    - [ ] `COMB`
    - [ ] Determine which clock speed devisor you need
        - [ ] set in `TCCRB`
    - [ ] Set a default for `OCRA/OCRB`
    - [ ] Set the pins to output mode

- [ ] interrupts?

    - [ ] `cli();`
    - [ ] Write to `TIMSK`
        - [ ] Enable counter overflow interrupt in normal mode
        - [ ] enable output compare interrupts in PWM/CTC mode
    - [ ] `sei();`
    - [ ] Write `ISR` function



# PWM mode in T1

Many different PWM modes. Todays focus:

- mode 5 (8-bit top)
- mode 6 (9-bit top)
- mode 7 (10-bit top)
- mode 14 (`ICR1` top)
- mode 15 (`OCR1A` top)



Frequency is fixed in modes 5, 6, 7. `OCR1A/OCR1B` determines the duty cycle.

In mode 14, `ICR1` sets the frequency, and `OCR1A/OCR1B` determines the duty cycle.

In the above, the duty cycle determines the pin.



In mode 15, `OCR1A` sets the frequency, and `OCR1B` is used to set the duty cycle. The output pin is always `OCR1B/PB2`



# Question

20ms period. What mode, and what scale for the clock?

I would use mode 15, so the prescaler is easy to set, and the output pin is defined. 
$$
4ms=prescale_1;\ 32ms=prescale_8;\ 262ms=prescale_{64}\\
1s=prescale_{256};\ 4s=prescale_{1024}\\
4ms\le20ms\le32ms\\
\therefore\\
prescaler=8
$$
