# Finite Bandwidth Effect

This is a curve from low to high

$T_R$= rise time

$BW_{CL}$= closed loop bandwidth

$B$=unity gain frequency
$$
BW_{CL}=\frac{B}{k_n}\\
$$

# Finite Slew Rate Effect

This is what produces the sawtooth effect

$T_{SR}$=rise time

$S$=slew rate, measured in $V/\mu s$
$$
f_{sr}=\frac{S}{2\pi V_o}=\frac{1}{T_{sr}}
$$

# Example Problem

A non-inverting amplifier with a ==gain of 50== is used to amplify a signal whose ==peak input is 250mV== and ==frequency range is from DC to 15kHz==. 

Find the unity gain frequency given $BW_{CL}=60kHz$. (Also could be worded as “at a bandwidth of four times the frequency range”)
$$
A_{CL}=M(w)=\frac{A_{CL_{DC}}}{\sqrt{1+{f\over BW_{CL}^2}}}\\
A_{CL}=\frac{50}{\sqrt{1+{15kHz\over (60kHz)^2}}}\\
A_{CL}=48.5=k_n\\
B=BW_{CL}k_n=60kHz(50)=\\
\overline{\underline{|B=300kHz|}}
$$

Find the slew rate.
$$
S=2\pi V_0f_{sr};\ V_0=A_{CL}V_{io}=50(250mV)\\
S=2\pi (50)(250mV)(20kHz)\\
\overline{\underline{|S=1.57V/\mu s|}}
$$
