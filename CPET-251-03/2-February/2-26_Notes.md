# I^2^C Bus Speeds

## Standards

Original Standard: 100kHz

Fast Mode: 400kHz

Fast Mode Plus: 1MHz

High-speed mode: 3.4MHz[^1]

Ultra Fast mode: 5MHz [^1]

## Setting bus speed

`TWBR` defines the bit rate for the two wire interface (`TWI`). 
$$
SCL= \frac{clock}{16+2(TWBR)\times prescale}\\
assume\ prescale=1\\
TWBR={\frac{16MHz}{bitrate}-16\over2}
$$


# TWI enable

`TWCR` is the `TWI` control register. 

==ONLY CHANGE `TWEN` WHEN YOU WANT TO TURN OFF `TWI`==

`TWINT` sets when its finished its current job and expects application software response.

`TWSTA` is the start bit.

`TWSTO` is the stop bit.

`TWDR` (register) contains the data that you wish to send or receive.

# Important Code blocks

```c
void initI2C (unsigned long bit_rate){
    TWBR   = ((16000000/bit_rate)-16)/2; //TWBR set
    TWCR  |= 0b00000100;
    DDRC  &= 0b11001111; 
    PORTC |= 0b00110000; //initialize pins PC4/PC5 as pullups (clocks idle high)
}

void i2cWaitForComplete(){
    while(!(TWCR & 0x80)){} //wait until TWINT is true
}

void i2cStart(){
    TWCR = 0b10100100;  //clear interrupt, initiate start, enable TWI
    i2cWaitForComplete(); //wait to know start is complete
}

void i2cStop(){
    TWCR = 0b10010100;   //clear interrupt, initiate stop, enable TWI
}

void i2cSend(byte data){
    TWDR = data;
    TWCR = 0b10000100;    //clear interrupt and enable
    i2cWaitForComplete(); //wait to know data is sent
}

byte i2cReadAck(){        //multi-read 
    TWCR = 0b11000100;    //clear interrupt, allow ACK, enable TWI
    i2cWaitForComplete(); //wait to know data is recieved
    return(TWDR);         //return recieved data
}

byte i2cReadNoAck(){      //single read (always done eventually)
    TWCR = 0b10000100;    //clear interrupt, enable TWI
    i2cWaitForComplete(); //wait to know data is recieved
    return(TWDR);         //return recieved data
}
```

## Example code in use

```c
void setup(){
    Serial.begin(9600);
    initI2C(100000);
}

void loop(){
    i2cStart();
    i2cSend(MPU6050_address_W);
    i2cSend(WHOAMI);
    i2cStart();
    i2cSend(MPU6050_address_R);
    read_data = i2cReadNoAck();
    i2cStop();
    if(read_data == 0x68) 
        Serial.println("MPU Successfully connected!");
    else
        Serial.println("MPU not connected. Check your setup.");
}
```





[^1]:Note that this is not possible on our boards, due to overhead and max clock speed of our chip



