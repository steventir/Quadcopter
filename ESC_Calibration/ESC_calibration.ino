//This is a code to run the motors and calibrate the ESCs
//ESC Lines : orange is going to 9
              block is GROUND

#include <Servo.h>
 
Servo esc;
int throttlePin = 0;
 
void setup()
{
esc.attach(9);
}
 
void loop()
{
int throttle = analogRead(throttlePin);
throttle = map(throttle, 0, 1023, 0, 179);
esc.write(throttle);
}
