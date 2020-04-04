# Skyler MacDougall

## Homework 8: due 3/30/2020

1.  Name the principal components of an induction motor.
    Motors have two parts; a stator and a rotor.
    
2.  Explain how a revolving field is set up in a 3-phase induction motor.
    Current is pushed through the stator.
    
3.   If we double the number of poles on the stator of an induction motor, will its synchronous speed also double?
    No, it will be halved.
    
4.   The rotor of an induction motor should never be locked while full voltage is being applied to the stator. Explain.
    The windings induct current in the rotor, and if left for long enough, it could melt or become otherwise damaged.
    
5.   Why does the rotor of an induction motor turn slower than the revolving field?
    The rotating fields would align, stopping the induced voltage and current, slowing the rotor back down.
    
6.   What happens to the rotor speed and the rotor current when the mechanical load on an induction motor increases?

The rotor will slow down, and the current will increase.

10.  A 3-phase, 20-pole induction motor is connected to a 600V, 60Hz source.
     1.  What is the synchronous speed?
         $$
         n_s={120f\over p}\\
         n_s={120(60Hz)\over 20\ poles}\\
         n_s=360r/min
         $$
         
     2.  If the voltage is reduced to 300V, will the synchronous speed change? 
         Because the voltage is not in the function shown above, it will not change the synchronous speed.



12.  Calculate the approximate values of the starting current, full-load current, and the no-load current of a 150 horsepower, 575V, 3-phase induction motor.
     $$
     I_{full}={600P_h\over E}={600(150hp)\over575V}\\
     \underline{\overline{|I_{full}\approx156A|}}\\
     I_{nl}=0.3I_{full}=0.3(156A)\\
     \underline{\overline{|I_{nl}\approx47A|}}\\
     I_{start}=I_{LR}=6I=6(156A)\\
     \underline{\overline{|I_{start}=939A|}}
     $$
     



14. How can we change the direction of rotation of a 3-phase induction motor?
    Swap the second and third phases on the stator.



15. 
    1. Calculate the synchronous speed of a 3-phase, 12-pole induction motor that is excited by a 60Hz source.
        $$
        n_s={120f\over p}\\
        n_s={120(60Hz)\over12\ poles}\\
        n_s=600r/min
        $$
        
    2. What is the nominal speed if the slip at full load is 6%?
        $$
        s={n_s-n\over n_s}\\
        0.06={600-n\over600}\\
        600-n=36\\
        n_{nominal}=564r/min
        $$
        



18. A 3-phase 75hp, 440V induction motor has a full-load efficiency of 91% and a power factor of 83%. Calculate the nominal current per phase.
    $$
    75hp*0.742kW/hp=55.65kW\\
    {55.65kW\over0.91\%\ efficiency}=61.15kW\\
    {61.15kW\over0.83\ pf}=73.68kVA\\
    P=3V_{phase}I_{phase}\\
    73.68kVA=3({440V\over\sqrt3})I_{phase}\\
    I_{phase}={73.68kVA*\sqrt3\over3*440V}\\
    I_{phase}=96.68A
    $$



23. A large, 3-phase, 4kV, 60Hz, squirrel-cage induction motor draws a current of 385A and a total active power of 2344kW when operating at full load. The corresponding speed is accurately measured at 709.2r/min. The stator is connected in wye and the resistance between the two stator terminals is $0.10\Omega$. The total iron losses are 23.4kW and the windage and friction losses are 12kW. Calculate the following:
    1. the power factor at full load
        $$
        
        $$
    
    2. the active power supplied to the rotor
        $$
        P_{js}=3I^2R=3*(385A)^2*(0.10\Omega/2)\\
        P_{js}\approx22.2kW\\
    P_e=2344kW\\
        P_f=23.4kW\\
        P_r=P_e-P_f-P_{js}=2344kW-23.4kW-22.2kW\\
        \overline{\underline{|P_r=2298kW|}}
        $$
        
    3. the total $I^2R$ losses in the rotor
        $$
        s=0.004\\
        P_{jr}=sP_r=0.004*2298kW\\
    \overline{\underline{|S_{jr}=3.3kW|}}
        $$
        
    4. The load mechanical power [kW], torque [$kN*m$], and efficiency [%].
        $$
        P_m=P_r-P_{jr}=2298kW-3.3kW\\
        \overline{\underline{|P_m=2295kW|}}\\
        T=9.55P_r/n_s={9.55*2298kW\over 720r/min}\\
        \overline{\underline{|T=30480n*m|}}
        $$



24.  If we slightly increase the rotor resistance of an induction motor, what effect does this have (increase or decrease) upon
     1.  Starting torque
     2.  Starting current
     3.  Full-load speed
     4.  Efficiency
     5.  Power factor
     6.  Temperature rise of the motor at its rated power output.