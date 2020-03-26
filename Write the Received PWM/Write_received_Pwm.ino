/*This code is used to write the received pwm values
 * basic servo library is used in the code
 *Vamsi krishna  
 */

#include <Servo.h>
Servo myservo; 
unsigned long duration1;
int ch1 = A0; // connect the channel three of the receiver to arduino A0
void setup() {
  myservo.attach(6); // Take output from any of the pwm pins 
  myservo.writeMicroseconds(1000); //initilize 
  Serial.begin(57600);
  pinMode(ch1, INPUT);
}

void loop() {
    duration1 = pulseIn(ch1, HIGH);
    Serial.print("thor:"); Serial.println(duration1); 
    myservo.writeMicroseconds(duration1);   
}
