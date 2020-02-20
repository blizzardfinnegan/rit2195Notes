# Ports

## Port B

mainly used for oscillators and timers

## Port C

mainly used for A/D conversion or pin change interrupts. (PC6 is an external active low RESET)

## Port D

mainly used for communication or pin change interrupts



Pins don’t immediately go to high or low. If you aren’t driving it, its an unstable output. As such, there are pull-up resistors, which pulls the value up toward 1. 

Any pushbuttons will use pull-ups.



Avoid ports C until we start doing analog.



To configure and use Port D, you need to configure PORTD, the data register, DDRD, the data direction register, and the PIND, the port input pin addresses.

### DDRD - Port D Data Direction Register

Writing a 1 initializes a pin to make it an output

Writing a 0 makes the pin an input

ArduinoC uses the red numbers in the main image. In C, write to the register.

```c
void setup{
    DDRD = 0b00000010;
}
```

### PORTD - Port D Data Register

Writing a 1 sets the pin high

writing a 0 sets the pin low

#### Example

```c
void setup{
    DDRD = 0xFF;
}
void loop{
    PORTD=0x01;
    delay(1000);
    PORTD=0xFE;
    delay(1000);
}
```

### PIND - Port D input pin address

READING a 1 indicates its being driven externally to a high

READING a 0 indicates its being driven externally to a low

***DO NOT WRITE TO THIS REGISTER***

# Masking

In embedded programming we often need to manipulate individual bits.

- `~` inversion
- `&` AND
    - use for clearing registers
    - AND with 1 will leave the bit untouched, and 0s to clear
- `|` OR
    - use for setting specific values in a register
    - will leave all zeroes alone, only setting 1s
- `^` XOR
- `>>` shift right
- `<<` shift left

# Code examples

instead of:

```c
void setup(){
    DDRD = 0x02;
}
```

Use:

```c
void setup(){
    DDRD |= 0x02;
}
```

This does not change initial values already in the system, except for the ones you want it to.

```c
void setup(){
    DDRD |= 0xFF;
}

void loop(){
    PORTD |= 0x01;
    delay(1000);
    PORTD &= 0xFE;
    delay(1000);
}
```



Start understanding register programming, as it takes up less space, and is more universally portable.

## Lab 1 register example

```c
void setup(){
    DDRB|=0x20; //makes PB5 an output
    PORTB &= 0xDF; //drives PB5 low
}

```

