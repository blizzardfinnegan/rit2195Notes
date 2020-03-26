#include <Wire.h>
#include <MPU6050.h>
#define SERVOrotate 500
#define SERVO 375
#define degree 5


MPU6050 mpu; // declare a variable called mpu of datatype MPU6050
unsigned long timeStampStartOfLoopMs = 0;
float timeStepS = 0.01;
float yaw = 0.0f; // pitch, roll and yaw values

unsigned long posistion = 0;

Vector normalizedGyroDPS; //stores the three gyroscope readings XYZ in degrees per second (DPS)
volatile bool newDataFlag=false; // boolean flag to indicate that timer1 overflow has occurred
unsigned long startMicroseconds,elapsedMicroseconds; // use for profiling time for certain tasks


//==============================================================================

void setup() 
{
  Serial.begin(115200);
  
cli();
TCCR1A = 0b00100010; //Mode 14 fast PWM, 256 scalar
TCCR1B = 0b00011101;
TIMSK1 |= 0b00000100; //enable timer 1 overflow interrupt 
ICR1 = 4999; 
OCR1A = SERVO;
sei();

  while(!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G)) 

{
    Serial.println("Could not find a valid MPU6050 sensor, check wiring.");
    delay(1000);
}

  mpu.calibrateGyro(); 
  mpu.setThreshold(1);
               
} 

//==============================================================================

void loop()
 {
  normalizedGyroDPS = mpu.readNormalizeGyro(); 
 
  yaw = yaw + normalizedGyroDPS.ZAxis * timeStepS;
    Serial.println(yaw);  

  posistion = (SERVOrotate - SERVO) * yaw / degree;
    OCR1A = SERVO + servoValue;
} 

//==============================================================================
