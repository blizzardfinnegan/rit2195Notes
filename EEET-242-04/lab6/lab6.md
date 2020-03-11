# Objective

The objective of this lab was to experimentally look at the wiring and measurement of values in three-phase transformer circuits.

# Procedure



# Results and Conclusions



# Wiring Diagrams

![](lab6.assets/deltaWye.png)[^1]

*Figure 1: Delta-Wye Transformer Diagram*

![](lab6.assets/deltaDelta.png)

*Figure 2: Delta-Delta Transformer Diagram*

![](lab6.assets/splitPhase.png)

*Figure 3: Delta-Delta Split Phase Transformer Diagram*

![](lab6.assets/unbalancedLoad.png)[^2]

*Figure 3: Delta-Delta Split Phase Transformer* ***unbalanced*** *Diagram*

![](lab6.assets/transformerGuide.png)

*Figure 6: Single Transformer Guide*

[^1]:The source side of this circuit is used in all other configurations in this lab. This will not be repeated in future configurations, to save space.
[^2]:Boxes over gaps denote removed resistors

# Experimental Data

## Delta-Wye Transformer

### Voltage (V)

| Location    | Line   | Phase | Line (ideal) | Phase (ideal) |
| ----------- | ------ | ----- | ------------ | ------------- |
| Primary 1   | 206.63 | 119.3 | 207.85       | 120           |
| Primary 2   | 206.63 | 119.3 | 207.85       | 120           |
| Primary 3   | 203.34 | 117.4 | 207.85       | 120           |
| Secondary 1 | 101.84 | 58.8  | 103.92       | 60            |
| Secondary 2 | 98.21  | 56.7  | 103.92       | 60            |
| Secondary 3 | 98.03  | 56.6  | 103.92       | 60            |

$$
V_L=\sqrt3V_\phi=\sqrt3(119.3V)=206.63
$$



### Current (A)

| Location    | Line   | Phase  | Line (ideal) | Phase (ideal) |
| ----------- | ------ | ------ | ------------ | ------------- |
| Primary 1   | 0.1175 | 0.1175 |              |               |
| Primary 2   | 0.1170 | 0.1170 |              |               |
| Primary 3   | 0.2779 | 0.2779 |              |               |
| Secondary 1 | 0.0100 | 0.0100 |              |               |
| Secondary 2 | 0.367  | 0.367  |              |               |
| Secondary 3 | 0.367  | 0.367  |              |               |

### Miscellaneous

| Measurement              | Value | Ideal Value |
| ------------------------ | ----- | ----------- |
| $R_{1_{calc}}\ (\Omega)$ |       | 600         |
| $R_{2_{calc}}\ (\Omega)$ |       | 600         |
| $R_{3_{calc}}\ (\Omega)$ |       | 600         |
| $a_a$                    |       | 0.5         |
| $a_b$                    |       | 0.5         |
| $a_c$                    |       | 0.5         |
| $P_{3\phi_p}\ (W)$       |       |             |
| $P_{3\phi_s}\ (W)$       |       |             |



## Delta-Delta Transformer

### Voltage (V)

| Location    | Line  | Phase | Line (ideal) | Phase (ideal) |
| ----------- | ----- | ----- | ------------ | ------------- |
| Primary 1   | 118.0 | 118.0 | 120          | 120           |
| Primary 2   | 121.0 | 121.0 | 120          | 120           |
| Primary 3   | 117.0 | 117.0 | 120          | 120           |
| Secondary 1 | 59.4  | 59.4  | 60           | 60            |
| Secondary 2 | 59.7  | 59.7  | 60           | 60            |
| Secondary 3 | 59.9  | 59.9  | 60           | 60            |

### Current (A)

| Location    | Line   | Phase | Line (ideal) | Phase (ideal) |
| ----------- | ------ | ----- | ------------ | ------------- |
| Primary 1   | 0.1244 |       |              |               |
| Primary 2   | 0.1230 |       |              |               |
| Primary 3   | 0.1253 |       |              |               |
| Secondary 1 | 0.1735 |       |              |               |
| Secondary 2 | 0.1711 |       |              |               |
| Secondary 3 | 0.1695 |       |              |               |

### Miscellaneous

| Measurement              | Value | Ideal Value |
| ------------------------ | ----- | ----------- |
| $R_{1_{calc}}\ (\Omega)$ |       | 600         |
| $R_{2_{calc}}\ (\Omega)$ |       | 600         |
| $R_{3_{calc}}\ (\Omega)$ |       | 600         |
| $a_a$                    |       |             |
| $a_b$                    |       |             |
| $a_c$                    |       |             |
| $P_{3\phi_p}\ (W)$       |       |             |
| $P_{3\phi_s}\ (W)$       |       |             |



## Delta-Delta With Split Phase Transformer

### Voltage (V)

| Location  | Line  | Phase | Line (ideal) | Phase (ideal) |
| --------- | ----- | ----- | ------------ | ------------- |
| Primary 1 | 120.2 | 120.2 | 120          | 120           |
| Primary 2 | 118.5 | 118.5 | 120          | 120           |
| Primary 3 | 119.1 | 119.1 | 120          | 120           |
| $R_1$     | 114.3 | 114.3 | 120          | 120           |
| $R_2$     | 113.7 | 113.7 | 120          | 120           |
| $R_3$     | 116.0 | 116.0 | 120          | 120           |
| $R_4$     | 55.9  | 55.9  | 60           | 60            |
| $R_5$     | 57.1  | 57.1  | 60           | 60            |

### Current (A)

| Location  | Line   | Phase | Line (ideal) | Phase (ideal) |
| --------- | ------ | ----- | ------------ | ------------- |
| Primary 1 | 1.2    |       |              |               |
| Primary 2 | 1.2    |       |              |               |
| Primary 3 | 1.2    |       |              |               |
| $R_1$     | 1.48   |       |              |               |
| $R_2$     | 1.21   |       |              |               |
| $R_3$     | 1.19   |       |              |               |
| $R_4$     | 0.1941 |       |              |               |
| $R_5$     | 0.1484 |       |              |               |

### Miscellaneous

| Measurement              | Value |
| ------------------------ | ----- |
| $R_{1_{calc}}\ (\Omega)$ |       |
| $R_{2_{calc}}\ (\Omega)$ |       |
| $R_{3_{calc}}\ (\Omega)$ |       |
| $a_a$                    |       |
| $a_b$                    |       |
| $a_c$                    |       |
| $P_{3\phi_p}\ (W)$       |       |
| $P_{3\phi_s}\ (W)$       |       |



## Delta-Delta With Split Phase Transformer - Unbalanced Load

### Voltage (V)

| Location  | Line | Phase |
| --------- | ---- | ----- |
| Primary 1 |      | 120.9 |
| Primary 2 |      | 118.9 |
| Primary 3 |      | 2.4   |
| $R_1$     |      | 3.5   |
| $R_2$     |      | 4.2   |
| $R_3$     |      | 115.1 |
| $R_4$     |      | 56.9  |
| $R_5$     |      | 60.6  |

### Current (A)

| Location  | Line   | Phase |
| --------- | ------ | ----- |
| Primary 1 | 1.34   |       |
| Primary 2 | 0.0513 |       |
| Primary 3 | 1.46   |       |
| $R_1$     | 0.78   |       |
| $R_2$     | 1.26   |       |
| $R_3$     | 0      |       |
| $R_4$     | 1.28   |       |
| $R_5$     | 0      |       |

### Miscellaneous

| Measurement              | Value |
| ------------------------ | ----- |
| $R_{1_{calc}}\ (\Omega)$ |       |
| $R_{2_{calc}}\ (\Omega)$ |       |
| $R_{3_{calc}}\ (\Omega)$ |       |
| $a_a$                    |       |
| $a_b$                    |       |
| $a_c$                    |       |
| $P_{3\phi_p}\ (W)$       |       |
| $P_{3\phi_s}\ (W)$       |       |

