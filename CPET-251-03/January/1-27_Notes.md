On the resume, don’t put ArduinoC, put C. You worked with the Arduino platform, not the ArduinoC language.

Here is a step by step for lab 2.

```c
enum {STOP, LED_ON, LED_OFF};
int state = STOP, prevState = !state;
// This previous state is to define that its the first time in that state
boolean isNewState;
int stateTimer;
boolean isSwPressed, prevIsSwPressed, isSwJustPressed;
void setup(){
    DDRD  &= 0xDF;
    PORTD |= 0x20;
    DDRB  |= 0x08;
    PORTB &= 0xF7;
}

void loop(){
    prevIsSwPressed = isSwPressed;
    isSwPressed = !(PIND & 0x20);
    isSwJustPressed = (!isSwPressed && prevIsSwPressed);
    isNewState = (state != prevState);
    prevState = state;
    switch(state){
        case STOP:
            if(isNewState){
                Serial.printls("STOP");
                PORTB &= 0xF7;
            }
            if(isSwJustPressed) state = LED_ON;
            break;
        case LED_ON:
            if(isNewState){
                stateTimer = 0;
                Serial.println("LED_ON");
                PORTB |= 0x04;
            }
            stateTimer++;
            if (isSwJustPressed){
                PORTB &= 0xF7;
                state = STOP;
            }
            if (stateTimer >= 250) state = LED_OFF;
            break;
        default: state = STOP;
    }
    delay(1);
}
```



