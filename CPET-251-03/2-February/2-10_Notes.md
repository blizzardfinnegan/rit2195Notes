# PWM

But why tho?

- power efficiency
    - having the light off 10% of the time
- fade/dim instead of blink
- variable speed motors
- non-square audio waves



Signal toggles extremely fast, and is observed as a rough sine wave



frequency is how often it pulses

duty cycle is how much of the frequency is high



## Pins used by PWM

- PD3
    - OC2B
- PD5
    - OC0B
- PD6
    - OC0A
- PB1
    - OC1A
- PB2
    - OC1B
- PB3
    - OC2A



# Fast PWM mode (0 & 2)

## Mode 3

OCRA or OCRB determine when it comes down from 1. It goes back up to 1 when the timer rolls over

# Mode 7

OCRB sets when to come down from 1. OCRA says to go back to 1



Non-inverting is standard (see above), inverting is the opposite of above


$$
f_{OCnxPWM}={f_{clkI/O}\over N\times count_{clock}}
$$

# Servos

20ms PWM period

1-2ms duty cycle



