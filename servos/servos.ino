#include <Servo.h>

Servo servo1; // Servo on pin 9
Servo servo2; // Servo on pin 10

void setup() {
  servo1.attach(9); // Attach the first servo to pin 9
  servo2.attach(10); // Attach the second servo to pin 10
  Serial.begin(9600);
}

void loop() {
  
  servo1.write(0);
  servo2.write(180);
  // Move servo1 from 0 to 30 degrees
 
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

  servo1.write(0);
  servo2.write(180);
  delay(1000); // Wait for a second before starting the next cycle

  // Optional: Add code here to move the servos back to their starting positions if needed
}
