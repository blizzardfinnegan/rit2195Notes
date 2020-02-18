# Review

Lets assume we found a house on an asland and we checked the voltage in an outlet and found the following.
$$
E_m=2V
\\
I_m=1.5A
\\
f=60Hz
\\
\theta = {\pi \over 3}rad
$$
What is the period?

$1 \over 60$ seconds, or $0.1 \overline{66}$ seconds.



Conversion from cos to sin

cos -> sin 

+90^o^

sin -> cos

-90^o^



## Effective Value (RMS)

$V_{eff}=V_{RMS}=E_m* {\sqrt{2}\over 2}= E_m*0.707$



We will be working with RMS values in this class. If you ever need to work with max values, you will need to calculate it. But we’ll probably just work with RMS in general.



## Phasor shit

Usually used for voltage (and occasionally power)

$120<20 ^{\circ}$

### Leading vs lagging

Everything is a voltage source. The current is a result. Thus, if it is leading, the current is ahead of the voltage. If it is lagging, the current is behind the voltage.



3 phase means 3 voltage sources $120^{\circ}$ apart. This is a fixed constant. This means that all the loads should be the same values.



If the current relative to the voltage is a capacitive current, it leads by $90^{\circ}$. Inductive lags by the same

***Inductive circuits lag. Capacitive circuits lead.***

## Harmonics

Fundamental harmonic is the frequency of the system.

each harmonic is x times the fundamental frequency.

## Impedance

$Z=R-j(2\pi fL<90^{\circ}-{1\over 2\pi fC}<(-90^{\circ}))$ or in phasor form

Cap leads by $90^{\circ}$

inductor lags by $90^{\circ}$

## Right hand rule

$$
E=N{\Delta \phi \over \Delta t}
\\
where\\
E=Voltage\\
N=turns\\
\Delta\phi=\Delta flux (webers)\\
\Delta t=\Delta time
$$

## Examples

### Example 1

$V(t)=12cos(60t+45^{\circ})$

phasor $\ne 12<45^{\circ}$

phasor = $6\sqrt{2}<45^{\circ}$



# Chapter 7

Power and wattage are the same. Positive watts is power in, negative watts is power out. 

True power is a little more difficult.

$P=IV(cos(\theta_V-\theta_I))$

Circulating power, or reactive power is measured in voltamps reactive (VAR)

$Q=VI(sin(\theta_V-\theta_I))$

Complex power is the total power, measured in voltamps (VA)

$S=|V||I|$

Ratio of active power to apparent power is the power factor.

$pf={P\over S}=cos(\theta_V-\theta_I)$

$745.7W =1hp$

