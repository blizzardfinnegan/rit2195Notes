# Equivalent Transformer Example

## Example 1

### Open Circuit

Measure from secondary because you will be more likely to have that source handy
$$
500kVA;\ 69kV-4.160kV;\ 60Hz\\[16pt]
Measured\ Values\ (from\ secondary):\\
V_s=4160V;\ I_s=2A;\ P_s=5kW\\[12pt]
R_s={V^2\over P}={4160V^2\over 5kW}=3461\Omega\\
S_s=VI=4160V\times2A=8320VA\\
Q_s=\sqrt{S^2-P^2}=\sqrt{(8320VA)^2-(500W)^2}\\Q=6650VAR\\
X_s={V^2\over Q_s}={4160V^2\over6650VAR}=2602\Omega\\
a={V_p\over V_s}={69000V\over4160V}=16.586\\a^2=275\\
R_{p_m}=275\times3461\Omega=952k\Omega\\
X_{p_m}=275\times2602\Omega=715k\Omega
$$

### Short Circuit

$R_m$ and $X_m$ can be ignored

Measure from primary, because you want to keep the voltage as low as possible.
$$
I=4A;\ P=2.4kW\\
Z_f={V\over I}={2600V\over4A}=650\Omega\\
R_f={P\over I^2}={2400W\over (4A)^2}=150\Omega\\
X_f=\sqrt{Z^2-R^2}=\sqrt{(650\Omega)^2-(150\Omega)^2}\\X_f=632\Omega
$$


# Name Plate Data

Remember, this is all the data you’re given from the nameplate.

$S_n$=nominal apparent power rating (generally KVA)

$E_{n_p}$=Nominal primary voltage rating (this is the higher of the two)

$E_{n_s}$=nominal secondary voltage rating (this is the lower of the two)



Using these, you can calculate $I_{n_p}={S_n\over E_{n_p}}$ and $I_{n_s}={S_n\over E_{n_s}}$

## Per Unit Methodology

Always choose a base:

- Base Power $S_n$
- Base voltages
    - $E_{n_p}$
    - $E_{n_s}$

$$
Nominal:\\
Z_{n_p}={E_{n_p}\over I_{n_p}}={E_{n_p}^2\over S_n}\\
Z_{n_s}={E_{n_s}\over I_{n_s}}={E_{n_s}^2\over S_n}\\
Z_p(per\ unit)={Z_p\over Z_{n_p}}\\
Z_s(per\ unit)={Z_s\over Z_{n_s}}\\
$$

Per unit impedance = % impedance

==Note:==

==For $S<100kVA\implies {X\over R}\approx1$ so we can then assume $Z=\sqrt2R=\sqrt2X$==

==For $S>100kVA\implies {X\over R}>4$ so we can then assume $Z\approx X$==



### Example 1

$$
250kVA;\ 4160/480V;\ 60Hz;\ 5.1\%\ Impedance\\[16pt]
Nominal:\\
Z_{n_p}={E_{n_p}^2\over S_n}={4160V^2\over 250kVA}=69\Omega\\
Z_{n_s}={E_{n_s}^2\over S_n}={480V^2\over 250kVA}=0.92\Omega\\[16pt]
Actual:\\
Z_p=Z_p(pu)\times Z_{n_p}\\
Z_p=5.1\%\times69\Omega=3.52\Omega\\
X_p=3.52\Omega;\ R_p\approx0\Omega
$$

### Example 2

Find $I_L$ given the following:
$$
100kVA;\ 480V-120V;\ 5\%\ impedance;\ {X\over R}>4\\
X\approx Z;\ R_L=100\Omega\\[20pt]
Z_{n_p}={E_{n_p}^2\over S_n}={480V^2\over 100kVA}=2.3\Omega\\
Z=Z_{n_p}\times Z_p\\
Z=2.3\Omega\times0.05=0.1152\Omega\\
move\ R_L\ across\ transformer\\
simple\ current\ calculations
$$

