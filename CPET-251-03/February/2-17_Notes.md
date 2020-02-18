# Interrupts vs Polling

Interrupts provide priority, free up the CPU, and let you complete tasks faster

Where do interrupts come from?

- A/D converters
- Timers/counters
- Push buttons
- Sensors
- etc.



Only one interrupt at a time. (Except RESET, but thats… different)

Interrupts do the following

- stores and shuts down all processes
- runs ISR
- restores programs



# Pin Change Interrupts

`pinState != prevPinState`

Pin interrupts are grouped together in banks (these are the same as the ports).

`INT0` and `INT1` can trigger on specific points (Rising/falling edge, toggle, or cont. low), with second highest priority interrupt



==MULTIPLE PINS SHARE INTERRUPT VECTORS==

`PCINT0`=`PCINT0_vect`

`PCINT1`=`PCINT1_vect`

`PCINT2`=`PCINT2_vect`



`PCMSKn` tells the microcontroller what pins are valid interrupts. Essentially, an enable for the interrupts.

`PCICRn` turns on the individual interrupt

## Set pin change interrupts

1. `cli()`
2. Enable `PCICR`
3. set pins `PCMSKn`
4. `sei()`



