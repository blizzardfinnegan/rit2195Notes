void setup(){
    TCCR0A = 0b10000011;
    TCCR0B = 0b00000001;
    OCR0A = 25;
    TCNT0 = 0;
    cli();
    EICRA = 0;
    EIMSK = 3;
    sei();
}

void loop(){
    while(1);
}

ISR(INT1_vect){
    if(OCR0A > 25){
        OCR0A -= 25;
    }
}

ISR(INT0_vect){
    if(OCR0A < 230){
        OCR0A += 25;
    }
}
