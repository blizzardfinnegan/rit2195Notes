//Lab_1_hello_arduino
#define LED_PIN  13
char inChar;
boolean isFreshInChar;

void setup() {
  pinMode(LED_PIN , OUTPUT);
  digitalWrite(LED_PIN , LOW);
  
  // Set serial monitor console termination for 'No line ending'
  Serial.begin(9600);
  Serial.println(F("Lab 1: hello arduino v0.4\n"));
  delay(5000);
}

void loop() { 
  isFreshInChar = false;  
  if (Serial.available()) {
    inChar = Serial.read();
    Serial.print("Serial input detected: ");
    Serial.println(inChar);
    isFreshInChar = true;
  }

  if (inChar == 'n') digitalWrite(LED_PIN , HIGH); // oN
  if (inChar == 'f') digitalWrite(LED_PIN , LOW);  // oFf

  if (inChar == 'b') { // blink with 25% duty cycle
    digitalWrite(LED_PIN , HIGH);
    delay(250);
    digitalWrite(LED_PIN , LOW);
    delay(750);
  }

  // function for readability: blink with 75% duty cycle
  if (inChar == 'B') blinkLED(750,1000);

  // Discover 't' persistence bug by observing high rate LED blink
  if (inChar == 't') { // toggle
    digitalWrite(LED_PIN , !digitalRead(LED_PIN ));
  }

  // Add state change detection to get proper toggle action.
  if (inChar == 'T') { // toggle
    if (isFreshInChar) digitalWrite(LED_PIN , !digitalRead(LED_PIN ));
  }

} // loop()

//********************************************************************************
void blinkLED(unsigned int msecT, unsigned int msecOn) {
  digitalWrite(LED_PIN , HIGH);
  delay(msecOn);
  digitalWrite(LED_PIN , LOW);
  delay(msecT - msecOn);
}
