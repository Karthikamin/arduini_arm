#include<Servo.h>//robotic arm using servos controled by potentiometer
Servo servo1;
Servo servo2;
Servo servo3;
int var;
int var1;
int var2;
void setup() {
  //Attach servo to PWM pins 9,10,11
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
 // reading analog value from pin A1,A2,A3
}

void loop() {
  var=analogRead(1);
  var=map(var,0,1023,0,180);
  servo1.write(var);
  delay(20);
  var1=analogRead(2);
  var1=map(var1,0,1023,0,180);
  servo2.write(var1);
  delay(20);
  var2=analogRead(3);
  var2=map(var2,0,1023,0,180);
  servo3.write(var2);
  delay(20);
  
  

}
