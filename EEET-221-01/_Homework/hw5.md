# Skyler MacDougall

##  Homework 5: Due 2/17/2020

1. A certain op-amp has a unity-gain frequency of 2MHz. For a *noninverting* amplifier, calculate the closed-loop 3-dB bandwidth for each of the following ideal values of closed loop gain:

    1. $A_{CL}=500$
        $$
        B_{CL}=B\beta; A_{CL}={1\over\beta}=K_n\\
        \therefore\\
        B_{CL}={B\over A_{CL}}={2MHz\over 500}\\
        \overline{\underline{|B_{CL}=4kHz|}}
        $$

    2. $A_{CL}=50$
        $$
        B_{CL}=B\beta; A_{CL}={1\over\beta}=K_n\\
        \therefore\\
        B_{CL}={B\over A_{CL}}={2MHz\over 50}\\
        \overline{\underline{|B_{CL}=40kHz|}}
        $$

    3. $A_{CL}=5$
        $$
        B_{CL}={B\over A_{CL}}={2MHz\over 5}\\
        \overline{\underline{|B_{CL}=400kHz|}}
        $$

    4. $A_{CL}=1$
        $$
        B_{CL}=B\beta; A_{CL}={1\over\beta}=K_n\\
        \therefore\\
        B_{CL}={B\over A_{CL}}={2MHz\over 1}\\
        \overline{\underline{|B_{CL}=2MHz|}}
        $$



3. A certain op-amp has a unity-gain frequency of 2MHz. For an inverting amplifier, calculate the closed-loop 3-dB bandwidth for each of the following ideal values of closed loop gain:

    1. $|A_{CL}|=500$
        $$
        B_{CL}=B\beta;\ |A_{CL}|={R_f\over R_i};\ \beta={R_i\over R_f+R_i}\\
        A_{CL}=500;\ \therefore\ \beta={1\over501}\\[16pt]
        B_{CL}={B\over \beta}={2MHz\over 501}\\
        \overline{\underline{|B_{CL}=3.99kHz\approx4kHz|}}
        $$

    2. $|A_{CL}|=50$
        $$
        B_{CL}=B\beta;\ |A_{CL}|={R_f\over R_i};\ \beta={R_i\over R_f+R_i}\\
        A_{CL}=50;\ \therefore\ \beta={1\over51}\\[16pt]
        B_{CL}={B\over \beta}={2MHz\over 51}\\
        \overline{\underline{|B_{CL}=39.2kHz\approx40kHz|}}
        $$
        
    3. $|A_{CL}|=5$
        $$
        B_{CL}=B\beta;\ |A_{CL}|={R_f\over R_i};\ \beta={R_i\over R_f+R_i}\\
        A_{CL}=5;\ \therefore\ \beta={1\over6}\\[16pt]
        B_{CL}={B\over \beta}={2MHz\over 6}\\
        \overline{\underline{|B_{CL}=333.\overline3kHz|}}
        $$
    
    4. $|A_{CL}|=1$
    
    $$
        B_{CL}=B\beta;\ |A_{CL}|={R_f\over R_i};\ \beta={R_i\over R_f+R_i}\\
        A_{CL}=1;\ \therefore\ \beta={1\over2}\\[16pt]
        B_{CL}={B\over \beta}={2MHz\over 2}\\
        \overline{\underline{|B_{CL}=1MHz|}}
    $$