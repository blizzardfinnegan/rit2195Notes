# Question

20ms period. What mode, and what scale for the clock?

I would use mode 15, so the prescaler is easy to set, and the output pin is defined. 
$$
4ms=prescale_1;\ 32ms=prescale_8;\ 262ms=prescale_{64}\\1s=prescale_{256};\ 4s=prescale_{1024}\\4ms\le20ms\le32ms\\\therefore\\prescaler=8
$$
