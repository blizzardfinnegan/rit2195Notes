# Skyler MacDougall, Matthew Gerace

# Homework 5: Due 2/19/2020

1. Create a reaction timer.

- After a random amount of time, the yellow LED turns on, the timer starts.
- If the user presses the button before the timer times out, the green LED goes on, and the yellow turns off.
- If the timer times out, the red LED goes on, and the yellow goes off.
- Use `delay();`  and `random();` for the delay before the yellow light.
- check for the button push in the main program loop and use the timer interrupt to know that time is up
- start with setting the timer to 1/2 second and shorten it from there.
- be sure to disable the interrupt as soon as the user presses the button. 

```c

```

2. Rewrite lab #3 section 6 using registers and timer interrupts. Note that when interrupts are used for timers, you don’t have to implement a state timer. Remember that when a variable is updated outside the main loop you must use the volatile design so that the compile does not optimize the variable out. 

```c
volatile int asdf;
```

3. Servos should react to a PWM signal as shown in the homework diagram. however, a pulse width of 1ms does not always put the servo at $0^\circ$ and a pulse width of 2ms does not always put the servo at $180^\circ$. Using timer1 and a FAST PWM mode create a PWM signal to drive a servo motor. You may need to adjust the registers for pulse width to get a full $180^\circ$ of rotation. Note, you cannot just copy the code from lab 4 as that was not fast PWM mode. 

```c

```

4. Read sections “Reset and Interrupt Handling” in the datasheet and answer the following questions:

    1. How does uC handle multiple interrupts arriving from different peripherals while an ISR is being serviced?

        

    2. What does uC do in the 4 cycle response time to service an ISR?

