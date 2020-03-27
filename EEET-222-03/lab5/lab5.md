Q: Does this system react the same to different forms of waves put into the mic?

A: The system has the same output as the input, so if the input is a sawtooth waveform, then the output will be similar. The square wave is not a perfect replication, but its very close.

Q: Why does the square wave not go through perfectly?

A: The square wave can't be replicated because the slew rate is not high enough.

Q: Why do you set the break frequency so much farther below the lowest signal frequency?

A: There may be some unexpected signals that dip slightly below your wanted lowest signal that you want to pick up. Moreover, it gives you a bit of wiggle room to make sure that all of the data you want will come through at 100% power.

Q: How did you find your values for your initial gain for -220?

A: Gain for an inverting amplifier is ${-R_f\over R_i}$. As we had to pick any value between $1k\Omega$ and $820k\Omega$, we picked easy numbers of $1k\Omega$ for $R_i$ and $220k\Omega$ for $R_f$. 