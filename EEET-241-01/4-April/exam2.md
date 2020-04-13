1.  Clearly label each voltage.

![image-20200407153954860](exam2.assets/image-20200407153954860.png)

2.  What is the synchronous speed of this motor?
    $$
    n_s=120*{f\over p}=120*{60Hz\over 6 poles}\\
    \overline{\underline{|n_s=1200rpm|}}
    $$
    

3.  How many poles does this motor have?
    $$
    poles = phases * 2 = 3 * 2\\
    \overline{\underline{|6\ poles|}}
    $$
    

4.  What is the slip of this motor?
    $$
    s={n_s-n\over n_s}={1200rpm-1076rpm\over1200rpm}\\
    \overline{\underline{|s=0.10\overline3|}}
    $$
    

5.  What is the mechanical output in BHP (brake horsepower) of this motor at full speed?
    $$
    rated\ hp * efficiency=10hp * 0.8\\
    \overline{\underline{|8BHP|}}
    $$

6.  What is the total impedance $Z_{motor}$ of this motor at full load?
    $$
    Z={V\over FLA}={208V\over30A}=6.9\overline3\Omega\\
    \theta=cos^{-1}(pf)=cos^{-1}(0.7071)\approx cos^{-1}({\sqrt2\over2})=45^\circ\\
    \overline{\underline{|Z=6.9\overline3\Omega<45^\circ|}}
    $$

7.  What is the resistive impedance $R_{motor}$ of this motor at full load?
    $$
    |Z|*cos(\theta)={\sqrt2\over2}\\
    R=4.9\Omega
    $$

8.  What is the reactive impedance $X_{motor}$ of this motor at full load?
    $$
    |Z|*sin(\theta)=6.9\overline3*{\sqrt2\over2}\\
    X=4.9\Omega
    $$
    

9.  What is the $X\over R$ ratio of the motor?

10.  What is the full load apparent power drawn by this motor?
     $$
     S=FLA * V * \sqrt3=208V*30A*\sqrt3\\
     S=10.8kVA
     $$

11.  What is the Full Load Active power drawn by this motor?
     $$
     P=S*cos(\theta)=10.8kVA*{\sqrt2\over2}\\\overline{\underline{|P=7.63668kW|}}
     $$
     

12.  What is the full load reactive power drawn by this motor?
     $$
     Q=S*sin(\theta)=10.8kVA*{\sqrt2\over2}\\\overline{\underline{|Q=7.63668kW|}}
     $$

13.  What is the locked rotor apparent power drawn by the motor?
     $$
     S=V*LRA*\sqrt3=208V*180A*\sqrt3\\
     \underline{\overline{|S=64.8kVA|}}
     $$

14.  Determine $I_{secondary_{line}}$.
     $$
     I={S\over V}={10.8kVA\over 208V}\\
     \overline{\underline{|I=51.96A|}}
     $$
     

15.  Determine $I_{secondary_{\phi}}$.
     $$
     I_{line}=I_\phi=51.96A
     $$
     

16.  Determine $I_{primary_{\phi}}$.
     $$
     I_{primary}={I_{secondary}\over a}={51.96A \over 4}\\\overline{\underline{|I_{primary_\phi}=13A|}}
     $$

17.  Determine $I_{primary_{line}}$.
     $$
     I_{line}=I_\phi*\sqrt3=13A*\sqrt3\\
     \underline{\overline{|I_{line}=22.5A|}}
     $$

18.  Determine $I_{utility_{line}}$.
     $$
     I_{utility}=I_{primary}=22.5A
     $$

19.  Determine $P_{secondary_\phi}$.
     $$
     P=VI=120V*51.96A=6.235kW
     $$

20.  Determine $P_{secondary_{3\phi}}$
     $$
     P_{3\phi}=3*P=3*6.235kW=18.7kW
     $$

21.  Determine $P_{primary_\phi}$.
     $$
     P=VI=480V*13A=6.24kW
     $$

22.  Determine $P_{primary_{3\phi}}$
     $$
     P_{3\phi}=3*P=3*6.24kW=18.7kW
     $$

23.  Determine $P_{utility}$.
     $$
     P_{utility}=P_{primary_{3\phi}}=18.7kW
     $$
     