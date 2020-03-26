/*This code is used to read pwm values
 * basic servo library is used in the code
 *Vamsi krishna  
 */


#include <Servo.h>
unsigned long duration1, duration3, duration2, duration4;
int ch1 = A0; 
int ch2 = A1;
int ch3 = A2;
int ch4 = A3;
void setup()
{
  Serial.begin(57600);
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode(ch3, INPUT);
  pinMode(ch4, INPUT);
}


void loop()  {
  duration1 = pulseIn(ch1, HIGH);
  duration2 = pulseIn(ch2, HIGH);
  duration3 = pulseIn(ch3, HIGH);
  duration4 = pulseIn(ch4, HIGH);
  Serial.print("roll:"); Serial.print(duration1); Serial.print("\t"); //connect channel one to A0
  Serial.print("pitch:"); Serial.print(duration2); Serial.print("\t");//connect channel two to A1
  Serial.print("throttle:"); Serial.print(duration3); Serial.print("\t"); //connect channel two to A2
  Serial.print("yaw:"); Serial.println(duration4);//connect channel two to A3
}
