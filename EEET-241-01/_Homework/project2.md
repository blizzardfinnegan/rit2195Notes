1.  What is the best utility voltage to operate this motor at?
    $$
    V_{util}=480V
    $$
    
2.  What is the synchronous speed of this motor?
    $$
    n_s=120{f\over p}=120*{60Hz\over 6\ poles}\\
    \overline{\underline{|n_s=1200rpm|}}
    $$

3.  How many poles does this motor have?
    6 poles, 2 for each phase.

4.  What is the slip of this motor?
    $$
    s={n_s-n\over n_s}={1200rpm-1080rpm\over1200rpm}\\
    \overline{\underline{|s=0.1|}}
    $$

5.  What is the mechanical output in HP of this motor at full speed?
    $$
    15hp(into watts)times efficiency\\
    \overline{\underline{|HP=12.75hp|}}
    $$

6.  What is the X/R ratio of the motor?
    $$
    12.75hp*746w/hp=9511.5W\\
    S={P\over pf}={9511.5W\over0.85}=11190VA\\
    Q=\sqrt{S^2-P^2}=\sqrt{11190^2-9511.5W^2}=5894.7VAR\\
    {X\over R}={P\over Q}={9511.5W\over 5894.7VAR}=1.613
    $$
    
7.  What is the total impedance of this motor at full load (magnitude and angle)?
    $$
    |Z|=\sqrt{R^2+X^2}=\sqrt{24.22\Omega^2+39.09\Omega^2}\\
    <Z=tan^{-1}({X\over R})=tan^{-1}(1.613)\\
    Z=45.968\Omega<58.2^\circ
	$$
    
8.  What is the resistive impedance of this motor at full load (ohms)?
	$$
    R={V^2\over P}={480V^2\over9511.5W}\\
    \underline{\overline{|R=24.22\Omega|}}
    $$

9.  What is the reactive impedance of this motor at full load (ohms)?
    $$
    X={V^2\over Q}={480V^2\over5894.7VAR}\\
    \overline{\underline{|X=39.09\Omega|}}
    $$

10.  What is the full load active power drawn by this motor (kW)?
     $9.5kW$

11.  What is the full load reactive power drawn by this motor (kVAR)?
     $5.8kVAR$