1.  How does EEPROM differ from EPROM?
2.  Think of a system with an embedded processor. What data do you think is stored in EEPROM? Remember that the data can be over written, but is saved upon power loss.
3.  There are ==8== bits in a byte. As such, when we say that EEPROM is 1kbyte, it indicates that there are ==1000== locations each containing ==8== bits.
4.  Why is the EEPROM address register, EEAR 16 bits in length?
5.  Why are there 3 different options for erasing and writing? Why would you use one over the other?
6.  What triggers the EEPROM interrupt? Why do you need to be careful when enabling the EEPROM interrupt?
7.  In the code on slide 18, why are the interrupts turned off then back on again?
8.  Write the lines of code necessary to retrieve the data stored in EEPROM location 255, invert it, and store it to location 511. You may call the read and write functions provided in the lecture. 

