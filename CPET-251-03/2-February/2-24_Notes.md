# I^2^C

Inter integrated circuits

- standard serial bus protocol
- enables communicationbetween microprocessor and peripherals
- 2 wires in the interface
    - clock
        - `SCL ` or `SCLK`
        - provided by master
        - uni-directional
    - data
        - `SDA` or `SDAT`
        - bi-directional
- inexpensive and simple

Arduino calls it 2-wire serial interface

Broadcasting is possible

Data should only change when `SCLK` is low. Both signals idle high. The master initiates the transfer by pulling `SDAT` low while holding `SCLK` high. To end the transmission the master pulls `SCLK` high. 

![](2-24_Notes.assets/dataPacketFormat.png)

Step 1 establishes the location of the device. Step 2 defines where in the memory needs to be written to the device. Step 3 actually writes to the device. (This is for writes only. Reads are the same)



On a write, the peripheral pulls data low every 9th bit. On a read, the master pulls data low on the 9th bit (except on the last one, where it pulls high to disconnect). If you don’t disconnect (`NAK`), you can do a register dump, in or out. If you’re doing this, its recommended to start in internal address `0`. You can start wherever you like, but you can only increment in register counts.



The master begins by sending start, the peripheral address, and a singular bit to establish data transfer direction (1 to read, 0 to write). The peripheral device whose address matches the address sent by the master will answer with an `ACK`. After the peripheral `ACK`s, data transfer takes place in the direction specified, and it takes 9 cycles for one byte. The master completes communication by sending a `STOP` signal. 



To allow for continued communications, there is a repeated start. Send the `SCLK` high, and pull the `SDAT` low. 



In order to read, you have to point the address to the correct location, so you start with a write command. After this, you restart, and request a read.



The pins on the board are on the end, past the digital pins, and on the other side, its next to the `GVS` male pins.



To initialize properly, do the following:

```c
DDRC  &= 0b11001111;
PORTC |= 0b00110000;
//arduinoCode
pinMode(A4, INPUT_PULLUP);
pinMode(A5, INPUT_PULLUP);
```

