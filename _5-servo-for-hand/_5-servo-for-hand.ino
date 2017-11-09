#include <Servo.h>
  
Servo servo1,servo2,servo3,servo4,servo5; 
  
int pos = 0 ; 
  
void setup() {
 servo1.attach(3); 
 servo2.attach(4);
 servo3.attach(5);
 servo4.attach(6);
servo5.attach(7);
}
  
void loop() {
 for (pos = 180; pos >= 0; pos -= 1) { 
  
 servo1.write(pos); 
 servo2.write(pos); 
 servo3.write(pos); 
 servo4.write(pos); 
 servo5.write(pos); 
  
 delay(15); 
 }
 for (pos = 0; pos <= 180; pos += 1) { 
 servo1.write(pos); 
 servo2.write(pos); 
 servo3.write(pos); 
 servo4.write(pos); 
 servo5.write(pos); 
 delay(15); 
 }
  
}
