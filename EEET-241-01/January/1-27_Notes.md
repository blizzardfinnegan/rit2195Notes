# Three phase generator

Voltage induced in a 3 phase generator is
$$
E=BLV\\
E = V_{instant} (V)\\
B= flux_{constant}\\
L= length_{conductor}\\
V= speed_{poles}
$$
length and speed are **GENERALLY **in SI.

## Phasing

Phases are 1,2,3. Coloring is either Blue, Orange, Yellow, or Black, Blue, White

If you hook up the wrong phases, things will generally spin in the wrong direction. To fix it, swap the leads..

But why are we using 3-phase. 

If we use less than 3, we get pulsing power. If we use more than 3, its way less efficient.



The circuits have 3 parts:

- Sources
- Transmission lines
- loads

There’s 4 possible 3-phase system configurations.

| Source   | Load     | System Description |
| -------- | -------- | ------------------ |
| $Y$      | $Y$      | $Y-Y$              |
| $Y$      | $\Delta$ | $Y-\Delta$         |
| $\Delta$ | $\Delta$ | $\Delta-\Delta$    |
| $\Delta$ | $Y$      | $\Delta-Y$         |

All the power sources in lab are $Y$ sources. You can tell, because there’s a neutral.

### Requirements for a balanced circuit

- All sources have the same
    - amplitude
    - frequency
- line imedances are equal on all phases
- loads are equal
- sources are $120^\circ$



# Y config

$$
V_{ac}=V_{ab}=V_{bc}=V_{line}\\
V_{an}=V_{bn}=V_{cn}=V_{phase}\\
V_{line}=V_{phase}\times \sqrt{3}\\
I_{ab}=I_{bc}=I_{ac}=I_{line}\\
I_{an}=I_{bn}=I_{cn}=I_{phase}\\
I_{line}=I_{phase}
$$

# $\Delta$ config

$$
V_{ac}=V_{ab}=V_{bc}=V_{line}\\
V_{an}=V_{bn}=V_{cn}=V_{phase}\\
V_{line}=V_{phase}\\
I_{ab}=I_{bc}=I_{ac}=I_{line}\\
I_{an}=I_{bn}=I_{cn}=I_{phase}\\
I_{line}=I_{phase}\times\sqrt{3}
$$

# Power

$$
S_{phase}=V_{phase}\times I_{phase}={V_{line}\times I_{line}\over \sqrt{3}}\\
S_{line}=V_{line}\times I_{line}={V_{phase}\times I_{phase}\over \sqrt{3}}\\
S_{total}=3\times S_{phase}=\sqrt{3}\times V_{line}\times I_{line}\\
$$

