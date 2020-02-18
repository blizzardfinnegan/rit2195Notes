// Lab5_ISR_INT0
// Written by: Nov 01, 2014, JTSchueckler
// revised:  Mar 05, 2017, Clark Hochgraf
// Desc: ++ PLEASE READ ALL COMMENTS ++
//       This program demonstrates a simple use of the INTO functionality.
//       Review the initialization of the interrupt system.
//       Review the setup of the ISR.
// Define volatile global variables for ISR system interface.
volatile long pulseCount = 0, prevpulseCount = -1;

//***********************************************************************************
void setup() {
  Serial.begin(9600);   Serial.println("Lab 5 ISR INT0 counter");

  configurePins();
  // Display the bootup values of EICRA, EIFR and EIMSK
  Serial.print("EIFR \t"); printlnBinaryByte(EIFR);
  Serial.print("EICRA \t"); printlnBinaryByte(EICRA);
  Serial.print("EIMSK \t"); printlnBinaryByte(EIMSK);
  Serial.println();

  initInterrupts();
// Display the programmed values of EICRA, EIFR and EIMSK
  Serial.print("EIFR \t"); printlnBinaryByte(EIFR);
  Serial.print("EICRA \t"); printlnBinaryByte(EICRA);
  Serial.print("EIMSK \t"); printlnBinaryByte(EIMSK);
  Serial.println();
}

//***********************************************************************************
void loop() {
  cli();
  if (pulseCount != prevpulseCount)  { // only print the pulse count if it has changed
    prevpulseCount = pulseCount;
    Serial.print("Switch was pressed ");
    Serial.print(pulseCount);
    Serial.println(" times.");
  }
  sei();
} // Arduino loop()

//============================================================================sei();=======
void configurePins(void) {
  DDRC &= (0 << 5 | 0 << 0);
  PORTC |= (1 << 5 | 1 << 0);
}

//===================================================================================
void initInterrupts(void)   {
  cli(); // Clear the Global INT bit to disable ALL interrrupts
  PCMSK1 |= (1 << 5 | 1 << 0);
  PCICR |= (1 << 1);
  sei();   // Sets the Global INT bit to enable ALL interrrupts
}
//===================================================================================
void printlnBinaryByte(byte value) { // prints 8-bit data in binary with leading 0's
  Serial.print("B");
  for (byte bitmask = 0x80; bitmask; bitmask >>= 1) {
        Serial.print((bitmask & value) ? '1' : '0');
    }
  Serial.println();
}

ISR(PCINT1_vect){
  static byte prevPINC;
  byte newPINC, changeMap;
  newPINC = PINC;
  changeMap = newPINC ^ prevPINC;
  if (changeMap & 0x01) pulseCount++;
  if (changeMap & 0x20) pulseCount--;
  //prevPINC = newPINC;
}
