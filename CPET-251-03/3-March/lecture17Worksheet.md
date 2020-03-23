1.  Go to MyCourses and click on Zoom. Join the meeting and say "hi". :white_check_mark:

2.  Indicate which of the following quantities are analog and which are digital.

    1.  ten position switch
        analog/==digital==

    2.  current flowing from an electrical circuit
        ==analog==/digital

    3.  Temperature of a room
        ==analog==/digital

    4.  sand grains on a beach
        analog/==digital==

    5.  automobile fuel gauge
        ==analog/digital==[^1]

        [^1]:While the gauge that we see is often analog, it can also be digital. Furthermore, there is some level of data lost between the pseudo-analog gauge we see in the drivers seat and the actual measurement in the tank, due to the information being fed through the computer of the car first.

3.  The process of converting an analog signal to a digital signal is called digitizing. How can the accuracy of the digital representation of an analog signal be increased?
    One way is increasing the sample rate. The other is to make your high and low limits smaller, leaving your more possible datapoints in the middle.
4.  The process used by the ADC in the ATMega328 is called *Successive Approximation ADC*
5.  Refer to slide 32 and take out a calculator. The formula for resolution is $V_{ref}-V_{min}\over2^n$. Do that calculation on your calculator and don't round off. Now multiply that number by 195. What do you get?
    7.605V
    Does it look familiar?
    Its almost the same as the value we're measuring.
6.  Now assume an ADC with a 10-bit resolution and a 5V $V_{ref}$. What is the resolution?
    0.0048828125
    If the ADC returns `0111000101` what is the voltage value it is reading?
    2.2119140625V