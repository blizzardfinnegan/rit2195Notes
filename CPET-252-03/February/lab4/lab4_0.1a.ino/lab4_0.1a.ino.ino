// Lab4_BlinkUsingDelay
// Written By: C. Hochgraf
// Date: Feb 2017

unsigned long numberOfLoopsRun=0;
//***********************************************************************************
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println(F("Lab 4: BlinkUsingDelay"));
  Serial.println(F("I'm ready to blink now."));
}
//***********************************************************************************
void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  Serial.print(F("The number of times loop code has run is: "));
  Serial.println(numberOfLoopsRun);
  numberOfLoopsRun++;
} // Arduino loop()
