# Skyler MacDougall

##  Homework 7: Due 3/4/2020

25. Consider a non-inverting amplifier with the following values:
    $$
    R_i=10k\Omega\\R_f=70k\Omega
    $$
     Assume that the op-amp slew rate is $0.6V/\mu s$. Calculate the slew rate limiting frequency, given the complex signal peak values:

    1. 10mV
        $$
        f_{sr}={S\over 2\pi V_o};\ V_o=V_i(1+{R_f\over R_i})\\
        f_{sr}={S\over 2\pi V_i(1+{R_f\over R_i})}\\
    f_{sr}={0.6V/\mu s\over 2\pi (10mV)({1+{70k\Omega\over10k\Omega}})}\\
        f_{sr}={0.6V/\mu s\over 2\pi (10mV)(8)}\\
        f_{sr}={300mV/\mu s\over\pi(10mV)(8)}\\
        f_{sr}={15MHz\over4\pi}\\
        \overline{\underline{|f_{sr}\approx1.2MHz|}}
        $$
        
    2. 0.1V
        $$
        f_{sr}={300mV/\mu s\over\pi(100mV)(8)}\\
        f_{sr}={3MHz\over8\pi}\\
        \overline{\underline{|f_{sr}\approx120kHz|}}
        $$
    
    3. 1V
        $$
        f_{sr}={0.3V/\mu s\over \pi (1V)(8)}\\
        f_{sr}={0.3MHz\over8\pi}\\
        \overline{\underline{|f_{sr}\approx12kHz|}}
        $$
        















45. A non-inverting amplifier with a gain of 25 is to be designed for use in an audio application. Specifications require that the gain vary no more than 1dB from near DC to 20kHz. the peak input signal is expected never to exceed 0.5V. Determine the minimum values for:
    1. unity gain frequency
        $$
        V_o=25V_i;\ V_i\le0.5V\\
        BW_{CL}(k_n)=B=20kHz(25)\\
        \overline{\underline{|B=500kHz|}}
        $$
        
    2. slew rate for the op-amp selected
        $$
        f_{sr}=125kHz;\ V_o=12.5V\\
        S=2\pi f_{sr}V_o\\
        S=2\pi (500kHz) (12.5V)\\
        \overline{\underline{|S=39.2V/\mu s|}}
        $$
        



47. An inverting amplifier with a gain of -8 is to be designed for use in a special type of video amplifier. Specifications require that the gain vary no more than 2dB from near DC to 1MHz. The peak input signal is estimated at 0.8V. Determine the minimum values of:
    1. unity gain frequency
        $$
        V_o=-8V_i;\ V_i\le0.8V\\
        A_{CL}=-8={-R_f\over R_i}\\
        k_n=1+{R_f\over R_i}=9\\
        BW_{CL}(k_n)=B=1MHz(9)\\
        \overline{\underline{|B=9MHz|}}
        $$
    
    2. slew rate for the op-amp selected
        $$
        f_{sr}=9MHz;\ V_o=6.4V\\
        S=2\pi f_{sr}V_o\\
        S=2\pi (9MHz) (6.4V)\\
        \overline{\underline{|S=361V/\mu s|}}
        $$
    
    3. Would the LM118/218/318 op-amp be satisfactory?

The max slew rate for the LM118/218/318 is typically $70V\mu s$, so definitely not. 