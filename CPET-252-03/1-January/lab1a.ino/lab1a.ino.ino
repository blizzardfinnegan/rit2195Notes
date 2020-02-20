//Lab1_hello_arduino
#define LED_PIN 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN , OUTPUT);
  digitalWrite(LED_PIN , LOW);

  Serial.begin(9600);
  Serial.println("Lab 1: Hello arduino v0.0\n");
  delay(10000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN , HIGH); //turn on LED
  Serial.println("On");
  delay(500);                   //wait half second
  digitalWrite(LED_PIN , LOW);  //turn off LED
  Serial.println("Off");        
  delay(500);                   //wait half second
}
