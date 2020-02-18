# Non inverting op amp

![](2-10_Notes.assets/nonInvertingOpAmp.png)
$$
A_{CL}={A_{ideal}\over1+({1\over A\beta})}= {A_{ideal}\over1+({k_n\over A})}\\
{V_o\over V_i}=k_n
$$

$$
A\ne A_0\ne A_{CL}
$$

# Inverting op amp

![](Untitled.assets/invertingOpAmp.png)
$$
A_{CL}={A_{ideal}\over1+({1\over A\beta})}= {A_{ideal}\over1+({K_n\over A})}\\
{V_o\over V_i}={-R_f\over R_i}
$$

# Open loop gain

$$
A={A_0\over 1+j({f\over f_1})}\\
A_0=given\\
f=freq\\
f_1=cutoff\ freq
$$

## Throw back time

$$
i=Ae^{j\omega t}\\
e^{j\theta}=cos\theta+jsin\theta
$$

Given the above two, we can say:
$$
A={A_0\measuredangle0\over\sqrt{1-({f\over f1})^2}\measuredangle tan^1({f\over f_1(1)})}\\
\downarrow\\
|A|_{dB}=20logA_0-20log(\sqrt{1+({f\over f_1})^2})\\
\measuredangle A=-tan^{-1}({f\over f_1})
$$
