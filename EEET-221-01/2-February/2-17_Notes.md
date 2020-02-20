# Gain

Let $f_1=10Hz,\ A_0=1_E6$
$$
A={A_0\over1+j{f\over f_1}}\\
|A|={A_0\over\sqrt{1+({f\over f_1})^2}}\\
|A|_{dB}=20(logA_0-log(\sqrt{1+({f\over f_1})^2}))
$$

| $f$    | gain (dB)      |
| ------ | -------------- |
| $0.1$  | $\approx120$   |
| $1$    | $\approx120$   |
| $10$   | $\approx120-3$ |
| $100$  | $100$          |
| $1_E4$ | $80$           |

$B=A_0f_1$, where $B$ is the unity gain frequency


$$
A_{OL}={A_0\over 1+j({f\over f_1})}\\
A_{CL}={A_{IDEAL}\over 1+{k_n\over A_{OL}}}
$$
==$A_{CL}={{A_{IDEAL}\over1+{k_n\over A_0}}\over 1+j({fk_n\over B(1+{k_n\over A_0})})}$==

^ This is INCREDIBLY important. It also leads to the following:

==$Break\ frequency\approx {B\over k_n}$==, where  $B$ = unity gain frequency

