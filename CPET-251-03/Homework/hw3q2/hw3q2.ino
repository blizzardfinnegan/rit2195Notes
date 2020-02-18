enum{HGFR, HYFR, HRFR, HRFG, HRFY, HRFRR, HRRFRR};
bool detect = false;
int state = HRFRR, prevState = !state;
float stateTimer = 0;
boolean isNewState;
void setup(){
    DDRD |= 0xFC; //setting light pins to output
    DDRB &= ~(0x01); //set detect pin to input
    PORTB |= 0x01; //turn on detect pin pullup
}

void loop(){
    detect = (PINB & 0x01);
    isNewState = (state != prevState);
    prevState = state;
    switch(state){
        case HGFR:
            if(isNewState){
                PORTD &= ~(0x80);
                PORTD |= 0x30;
            }
            if(detect) state = HYFR;
            break;

        case HYFR:
            if(isNewState){
                PORTD &= ~(0x20);
                PORTD |= 0x40;
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if(stateTimer >= 5000)state = HRFR;
            break;

        case HRFR:
            if(isNewState){
                PORTD &= ~(0x40);
                PORTD |= 0x80;
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if(stateTimer >= 5000)state = HRFR;
            break;

        case HRFG:
            if(isNewState){
                PORTD &= ~(0x10);
                PORTD |= 0x04;
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if((stateTimer >= 40000) || !(detect)) state = HRFY;
            break;

        case HRFY:
            if(isNewState){
                PORTD &= ~(0x04);
                PORTD |= 0x08;
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if(stateTimer >= 5000)state = HRFRR;
            break;

        case HRFRR:
            if(isNewState){
                PORTD &= ~(0x08);
                PORTD |= 0x10;
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if(stateTimer >= 5000)state = HGFR;
            break;

        case HRRFRR:
            if(isNewState){
                PORTD &= ~(0x08);
                PORTD |= 0x10;
                stateTimer=0;
            }
            break;

        default: state = HRRFRR;
    }
    delay(1);
}
