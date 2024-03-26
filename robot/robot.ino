#include <Servo.h>

Servo servo1; // Servo on pin 9
Servo servo2; // Servo on pin 10
Servo servo3; // Servo on pin 11
//Servo servo4; // Servo on pin 11
void setup() {
  servo1.attach(9); // Attach the first servo to pin 9
  servo2.attach(10); // Attach the second servo to pin 10
  servo3.attach(11); // Attach the third servo to pin 11
  //servo4.attach(6); // Attach the 4 servo to pin 6
  Serial.begin(9600);
}

void loop() {
  for (int pos = 0; pos <= 30; pos += 1) {
    servo1.write(pos);
    servo2.write(180-pos);
    delay(15); // Short delay to allow the servo to reach the position
    Serial.println(pos);
  }
  for (int pos = 30; pos >- 0; pos -= 1) {
    servo1.write(pos);
    servo2.write(180-pos);
    delay(15); // Short delay to allow the servo to reach the position
    Serial.println(pos);
  }
  for (int pos = 0; pos <= 180; pos += 1) {
    servo3.write(pos);
    delay(15);
  }
  
  delay(100);
  for (int pos = 180; pos >- 0; pos -= 1) {
    servo3.write(pos);
    delay(15);
  }
  delay(100);
  /*
  for (int pos = 180; pos >- 0; pos -= 1) {
    servo4.write(pos);
    delay(15);
  }
  delay(100);
  */
}
