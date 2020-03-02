# A-D Converters

==Not on the upcoming exam==

==HW7 due in 3 weeks==

==HW8 is individual. Fill out one for each of your group members==

Analog signals are inherently not digital. In electrical systems, analog signals are represented by a voltage that is proportional to its intensity.



Digital signals are discrete. A digital representation is the result of a number of limited precision to a continuously variable quantity. 



## Digitizing

periodic sampling to approximate the value

More samples is more better-er



Sampling rate must be at least twice as high as the highest frequency you want to represent. 

Bare minimum spec, and you can go higher.



## Hardware

hardware exists to convert analog to digital

it can be a standalone component, and is built into many microcontrollers

There’s different ways that it can be done, but we will focus on *successive Approximation ADC*



ex.

Voltage Range = 0-10

I have a voltage in that range, we successfully divide by two until we find essentially the same number.

We’re inputting a 7.65V source. 

We’re gonna cut it in half, then we compare to the source. If its higher, write a 1, take the divided number, and set as the lower bound. If its lower, write a 0, take the divided number, set as the upper bound. 
$$
{(10+0)\over2}=5<7.65;\ 1\\
{(10+5)\over2}=7.5<7.65;\ 1\\
{(10+7.5)\over2}=8.75>7.65;\ 0\\
{(8.75+7.5)\over2}=8.125>7.65;\ 0\\
{(8.125+7.5)\over2}=7.8125>7.65;\ 0\\
{(7.8125+7.5)\over2}=7.65625>7.65;\ 0\\
{(7.65625+7.5)\over2}=7.578125<7.65;\ 1\\
{(7.65625+7.578125)\over2}=7.578125<7.65;\ 1\\
$$
Final result is `11000011`

Bit-depth of the microcontroller creates the resolution.

