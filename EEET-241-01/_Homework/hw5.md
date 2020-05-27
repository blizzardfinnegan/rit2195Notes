# Skyler MacDougall

## Homework 5: due 2/19/2020

14. The primary of a transformer has twice as many turns as the secondary. ($a=2$) The primary voltage is $220V$ and a $5\Omega$ load is connected across the secondary. Calculate the power delivered by the transformer, as well as the primary and secondary current.
    $$
    V_p=220V;\ Z_s=5\Omega\\
    V_s={V_p\over a}={220V\over2}=110V\\
    P={V_s^2\over Z_s}={110V^2\over5\Omega}\\
    P=2420W\\[16pt]
    I_s={V_s\over Z_s}={110V\over 5\Omega}\\
    I_s=22A\\[16pt]
    I_p={I_s\over a}={22A\over2}\\
    I_p=11A\\[20pt]
    \overline{\underline{|P=2420W;\ I_s=22A;\ I_p=11A|}}
    $$
    



21. Explain why the secondary voltage of a practical transformer decreases with increasing resistive loads. 

The voltage decreases, because there is more voltage going to the internal losses.



25. A 66.7MVA transformer has an efficiency of 99.3% when it delivers full power to a load having a power factor of 100%.
    1. Calculate the losses in the transformer under these conditions.
        $$
        efficiency={P_s\over P_p}\\
        P_s=66.7MW*0.993=66.2331MW\\
        losses=P_p-P_s=66.7MW-66.2331MW\\
        \overline{\underline{|losses=466.9kW|}}
        $$
        
    2. Calculate the losses and efficiency when the transformer delivers 66.7MVA to a load having a power factor of 80%.

$$
losses\ are\ consistent\\
\therefore\\
losses=466.9kW\\[16pt]
P_s=66.2MW;\ S={P\over pf}={66.2MW\over0.8}=82.75MVA\\
S_p={66.7MW\over0.8}=83.375MVA\\
efficiency = {S_s\over S_p}={83.375MVA\over82.75MVA}\\
\overline{\underline{|losses = 466.9kW;\ efficiency=98.7\%|}}
$$



30. During a short-circuit test on a 10MVA, 66kV-7.6kV transformer, the following results were obtained. 
    $$
    E_g=2640V\\
    I_{sc}=72A\\
    P_{sc}=9.85kW
    $$
    Calculate:

    1. The total resistance and total leakage reactance referred to the 66kV primary side.
        $$
        10MVA>> 100kVA\\ \therefore \\ Z\approx X\\[16pt]
        Z={V\over I}={2640V\over 72A}\approx37\Omega\\
        \overline{\underline{|R\approx0\Omega;\ X\approx37\Omega|}}
        $$
    
    2. The nominal impedance of the transformer referred to the primary side.
        $$
        Z_n={E^2\over S_n}={(66kV)^2\over10MVA}\\
        \overline{\underline{|Z_n=435.6\Omega|}}
        $$
    
    3. The percent impedance of the transformer.
        $$
        Z_p (pu)={Z_p\over Z_{n_p}}={37\Omega\over435.6\Omega}\\
        \overline{\underline{|Z_p(pu)=8.42\%|}}
        $$



31. In the above problem, if the iron losses at rated voltage are 35kW, calculate the full-load efficiency of the transformer if the power factor of the load is 85%.

$$
35kW@pf=0.85;\ S={P\over pf}={35kW\over0.85}=41.2kVA\\
efficiency={S_s\over S_p}={10MVA-41.2kVA\over10MVA}\\
\underline{\overline{|efficiency=99.5\%|}}
$$

33. If a transformer were actually built according to the below diagram, it would have very poor voltage regulation. Explain why, and propose a method for improving it.
    ![](hw5.assets/hw5q33.png)



When the load is reflected across the transformer, it becomes significantly smaller, where the internal losses are significant.

One can change this in as simple a step as changing the sides that the power and the load are connected to, although if current or voltage requirements exist, it may be more difficult.