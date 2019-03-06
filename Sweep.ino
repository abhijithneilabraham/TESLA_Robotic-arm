#include <Servo.h>
Servo servo1, servo2, servo3, servo4, servo5 servo6;
int pos = 0;    
const int pingPin = 7; 
const int echoPin = 6; 

void setup() 
{
   Serial.begin(9600);
   pinMode(pingPin, OUTPUT);
   pinMode(echoPin, INPUT);
}

void ultrasonic() 
{
   long duration, distance;
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = duration / 29 / 2;
   Serial.print(distance);
}

void setup() {
  servo1.attach(3);  
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    servo1.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
