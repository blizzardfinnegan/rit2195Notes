enum{fwd, backr, backl, turnr, turnl, stop};
bool rs = false, ls = false;
int state = fwd, prevState = !fwd;
int stateTimer = 0;
#define forward  0xC0
#define rightTurn  0x40
#define leftTurn  0x80
boolean isNewState;
void setup(){
    DDRD |= 0xC0; DDRD &= ~(0x03); //setting input/output pins
    PORTD |= 0x03; //setting pushbutton pullups
}

void loop(){
    rs = !(PIND & 0x02);
    ls = !(PIND & 0x01);
    isNewState = (state != prevState);
    prevState = state;
    switch(state){
        case fwd:
            if(isNewState){
                PORTD |= forward;
            }
            if(rs) state = backr;
            else if(ls) state = backl;
            break;

        case backr:
            if(isNewState){
                PORTD &= ~(forward);
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if (stateTimer >= 500) state = turnr;
            break;

        case turnr:
            if(isNewState){
                PORTD |= rightTurn;
            }
            if (stateTimer >= 500) state = fwd;
            break;

        case backl:
            if(isNewState){
                PORTD &= ~(forward);
                stateTimer=0;
            }
            if(!(isNewState)){
                stateTimer++;
            }
            if (stateTimer >= 500) state = turnl;
            break;

        case turnl:
            if(isNewState){
                PORTD |= leftTurn;
            }
            if (stateTimer >= 500) state = fwd;
            break;

        case stop:
            if(isNewState){
                PORTD &= ~(forward);
            }
            break;

        default: state = stop;
    }
    delay(1);
}
