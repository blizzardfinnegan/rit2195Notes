

# Skyler MacDougall

##  Homework 2: Due 1/29/2020

1. Given an op amp with the following characteristics:
    $$
    A_O=80k\\
    r_d=400k\Omega\\
    r_o=50\Omega\\
    R_i=3k\Omega\\
    R_f=47k\Omega
    $$

    1. Find the feedback factor
        $$
        \beta={R_i\over R_i+R_f}={3\over50}=0.06
        $$

    2. loop gain ($A_{CL}$)
        $$
        A_{CL}\approx{1\over \beta}=16.\overline6
        $$

    3. exact closed loop gain ($A_{CL}$)
        $$
        A_{CL}={A_O\over 1+A_O\beta}={80k\over 1+(80k)(0.06)}\\
        \overline{\underline{|A_{CL}=16.663|}}
        $$

    4. Closed loop input resistance ($Z_i$)
        $$
        Z_i=(1+A_O\beta)r_d=(1+(80k)(0.06))(400k\Omega)\\
        \overline{\underline{|Z_i=2G\Omega|}}
        $$

    5. output resistance ($Z_o$)
        $$
        Z_o={r_o\over 1+A_O\beta}={50\over 1+(80k)(0.06)}\\
        \overline{\underline{|Z_o=10m\Omega|}}
        $$

    6. Compare with question 3-8

        The gain changes are comparable.





3. Repeat question 1(a-e) with the following changes:
    $$
    R_i=\cancel{3k\Omega}=30k\Omega\\
    R_f=\cancel{47k\Omega}=270k\Omega
    $$

    1. Find the feedback factor
        $$
        \beta={R_i\over R_i+R_f}={1\over10}=0.1
        $$

    2. loop gain ($A_{CL}$)
        $$
        A_{CL}\approx{1\over \beta}=10
        $$

    3. exact closed loop gain ($A_{CL}$)
        $$
        A_{CL}={A_O\over 1+A_O\beta}={80k\over 1+(80k)(0.1)}\\
        \overline{\underline{|A_{CL}=9.99875|}}
        $$

    4. Closed loop input resistance ($Z_i$)
        $$
        Z_i=(1+A_O\beta)r_d=(1+(80k)(0.1))(400k\Omega)\\
        \overline{\underline{|Z_i\approx3G\Omega|}}
        $$

    5. output resistance ($Z_o$)
        $$
        Z_o={r_o\over 1+A_O\beta}={50\over 1+(80k)(0.1)}\\
        \overline{\underline{|Z_o=6m\Omega|}}
        $$




5. Find $A_{CL}$ given
    $$
    R_i=1k\Omega\\
    R_f=99k\Omega
    $$

    1. $A_O=\infin$
        $$
        \beta={1\over100}\\
        A_{CL}={A_O\over 1+A_O\beta};\ A_O>>0\\
        A_{CL}={1\over \beta}\\
        \overline{\underline{|A_{CL}=100|}}
        $$

    2. $A_O=10^5$
        $$
        A_{CL}={10^5\over1+(10^5)({1\over100})}\\
        \underline{\overline{|A_{CL}=99.\overline{900099}|}}
        $$

    3. $A_O=10^4$
        $$
        A_{CL}={10^4\over1+(10^4)({1\over100})}\\
        \underline{\overline{|A_{CL}=99.\overline{0099}|}}
        $$

    4. $A_O=10^3$
        $$
        A_{CL}={10^3\over1+(10^3)({1\over100})}\\
        \underline{\overline{|A_{CL}=90.\overline{90}|}}
        $$

    5. $A_O=10^2$
        $$
        A_{CL}={10^2\over1+(10^2)({1\over100})}\\
        \underline{\overline{|A_{CL}=50|}}
        $$





7. Find $A_{CL}$ given
    $$
    R_i=10k\Omega\\R_f=510k\Omega
    $$

    1. $A_O=\infin$
        $$
        \beta={1\over52}\\A_{CL}={A_O\over 1+A_O\beta};\ A_O>>0\\A_{CL}={1\over \beta}\\\overline{\underline{|A_{CL}=52|}}
        $$

    2. $A_O=10^5$
        $$
        A_{CL}={10^5\over1+(10^5)({1\over52})}\\ 
        \underline{\overline{|A_{CL}=51.97|}}
        $$

    3. $A_O=10^4$
        $$
        A_{CL}={10^4\over1+(10^4)({1\over52})}\\ \underline{\overline{|A_{CL}=51.73|}}
        $$

    4. $A_O=10^3$
        $$
        A_{CL}={10^3\over1+(10^3)({1\over52})}\\
        \underline{\overline{|A_{CL}=49.50|}}
        $$

    5. $A_O=10^2$
        $$
        A_{CL}={10^2\over1+(10^2)({1\over52})}\\ 
        \underline{\overline{|A_{CL}=34.11|}}
        $$



