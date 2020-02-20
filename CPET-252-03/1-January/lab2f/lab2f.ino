#define SW1_PIN 8  
#define LED1_PIN 11 
#define MSEC_SAMPLE 1

enum {STOP, LED_ON, LED_OFF};

boolean isSwPressed, prevIsSwPressed, isSwJustReleased, isSwJustPressed, isSwChange;
int state = STOP, prevState = !state;
int stateTimer;
boolean isNewState;

void setup() {
  pinMode(SW1_PIN, INPUT_PULLUP);
  pinMode(LED1_PIN, OUTPUT);  digitalWrite(LED1_PIN, LOW);
  Serial.begin(9600);  Serial.println(F("Lab 2: if-then state machine\n"));
  Serial.println(STOP);  Serial.println(LED_ON); Serial.println(LED_OFF);
}

void loop() {
  // Input scan, signal conditioning, history evolution
  prevIsSwPressed = isSwPressed;
  isSwPressed = !digitalRead(SW1_PIN);
  isSwJustPressed = (isSwPressed && !prevIsSwPressed);  // switch edge detection
  isSwJustReleased = (!isSwPressed && prevIsSwPressed);    
  isSwChange = (isSwJustReleased || isSwJustPressed);
  
  // update state information
  isNewState = (state != prevState); // if state != prevState, then isNewState
  prevState = state;
  
  if (state == STOP) {
    // Entry housekeeping
    if (isNewState) Serial.println("STOP");
    // State business
    digitalWrite(LED1_PIN, LOW);
    // Exit condition is based only on switch changing
    if (isSwPressed) state = LED_ON;
  }
      
  else if (state == LED_ON) {
    // Entry housekeeping
    if (isNewState) {
      stateTimer = 0; // reset state timer to zero
      Serial.println("LED_ON");
      digitalWrite(LED1_PIN, HIGH);
    }
    // State business
    stateTimer++;
    // Exit condition 1 is based on switch changing
    if (isSwJustReleased) {
      digitalWrite(LED1_PIN, LOW);
      state = STOP;
    }
    // Exit condition 2 is based on timer expiring
    if (isSwPressed) state = LED_OFF;
  }
  
  else if (state == LED_OFF) {
    // Entry housekeeping
    if (isNewState) {
      stateTimer = 0; // reset state timer to zero
      Serial.println("LED_OFF");
      digitalWrite(LED1_PIN, LOW);
    }
    // State business
    stateTimer++;
    // Exit condition 1 is based on switch changing
    if (isSwJustReleased) {
      digitalWrite(LED1_PIN, LOW);
      state = STOP;
    }
    // Exit condition 2 is based on timer expiring
    if (isSwPressed) state = LED_ON;
  }
  else state = STOP;

  delay(MSEC_SAMPLE);
} //loop()
