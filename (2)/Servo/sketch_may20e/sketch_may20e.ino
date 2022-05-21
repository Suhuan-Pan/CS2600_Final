#include <ESP32Servo.h>

Servo myservo;  // create servo object to control a servo

int posVal = 0;    // variable to store the servo position
int servoPin = 15; // Servo motor pin

void setup() {
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object
  myservo.writeMicroseconds(1500);  // set servo to mid-point
  delay(15);
}



void loop() {

  Serials.printf("set servo to position: %d.\n", posVal);

  myservo.write(posVal);
  delay(20);
  myservo.detach();

}
