#define SW1_PIN 8
#define LED1_PIN 11
bool isSwPressed = 0;
bool prevIsSwPressed = 0;
bool isSwJustPressed = 0;
bool isSwJustReleased = 0;
bool isSwChange = 0;
void setup() {
  pinMode(SW1_PIN, INPUT_PULLUP);
  pinMode(LED1_PIN, OUTPUT);  digitalWrite(LED1_PIN, LOW);
   
  Serial.begin(9600);
  Serial.println(F("Lab 2: Switch State Decoding v0.0\n"));
}

void loop() {
  prevIsSwPressed = isSwPressed;
  isSwPressed = !digitalRead(SW1_PIN);  
  // When the switch is pressed, the SW_PIN is low, so !low is high or true
  isSwJustPressed = (isSwPressed && !prevIsSwPressed);  // switch edge detection
  isSwJustReleased = (!isSwPressed && prevIsSwPressed);    
  isSwChange = (isSwJustReleased || isSwJustPressed);

// uncomment just one line below at time to see how each input 
//  condition is detected. (enable just one output function at a time)

//  digitalWrite(LED1_PIN, isSwPressed);
  digitalWrite(LED1_PIN, isSwJustReleased);
//  digitalWrite(LED1_PIN, isSwJustPressed);
//  digitalWrite(LED1_PIN, isSwChange);  
//  digitalWrite(LED1_PIN, !digitalRead(LED1_PIN)); // see the sample rate  

  delay(100);
}
