# Post test notes

"The coronavirus is probably gonna give us the next ice age..." - unknown

Reviewing what you SHOULD have done on the exam. Grades are not complete yet.

"I've seen everything from good to... bad... so far."

Everything on the exam was discussed in class.



## Question 1

### Part a

$480V<0\circ$ source at 60Hz. Graph was fairly simple. He wanted time for the graph, rather than a radians or degrees.

### Part b

given a short circuit current of 1000A or 1kAIC, and a pf=1. This means we only have to find the resistive component of $Z_{in}$.

This far could have been done without a calculator. $Z_{in}=0.48\Omega$

### Part c

Given a coil, with $X=0.5\Omega$.

There were two answers accepted the $Z_T$:

A:
$$
Z=\sqrt{R^2+X^2}\\
where\ R=0.5\Omega;\ X=0.5\Omega\\
or\\
where\ R=0.48\Omega;\ X=0.48\Omega\\
Z\approx 0.69\Omega<46^\circ\ or\ Z\approx 0.707\Omega<45^\circ\\
I={V\over Z}={480V\over0.69}=695A
$$

Then, just graph it on top of the voltage graph

## Question 2

added simple transformer, just like in the notes. 480-240V, 10kVA, Z=10%. Magnetizing impedance is ignored. Z is all resistive.

Find $Z_f$.

$$
a=2;\ a^2=4\\
Primary\\
Z_{base}={V^2\over S}={480V^2\over10000VA}=23\Omega\\
Z_f=Z_{base}\times 10\%=2.3\Omega\\
Secondary\\
Z_{base}={V^2\over Z}={240V^2\over10000VA}=5.7\Omega\\
Z_{f_{sec}}=5.7\times 10\%=0.57\Omega
$$

==***NOTE: These impedances are either one, or the other. It wasn't completely established, so no points lost, but it will be important.***==

## Question 3

Connect em all together, but no load yet.

Don't bank on the transformer rating and the power input to be the same.

$I_p=0A;\ \therefore\ V_s=240V$

## Question 4

Connect a $1\Omega$ resistor to the secondary.

Convert that to a $4\Omega$ resistor on the opposite side of the transformer.

total impedance of the circuit should be about $6.78\Omega$.

$$
I_p={480\over6.78}=70.8A\\
I_s=I_pa=141.6A\\
V_s=141.6V\\
V_p=283.2V\\
P_s=IV=(141.6A)(141.6V)\approx20kW\\
P_{util}=34kVA\\
\%VR={240-141.6\over240}=41\%
$$

Unasked questions:

Whats the efficiency?
$$
eff={P_o\overP_i}\approx58%
$$

## Question 5

3 phase transformer. 4160/2400 volt generator in wye configuration. This is the 3 generators tied together in... series, ish?

4160-480/277V transformer.

277V across each coil, and 480 from phase to phase.

Generator phase voltage is 2400V.

The line voltage of the generator is 4160V.

$V_p=V_l=4160V$ for the transformer primary. $V_p=277V;\ V_l=480V$ for the transformer secondary.

To be continued after break...
