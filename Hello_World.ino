#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
  up(); down();
  delay(3000); 
}

void up() 
{ 
  for(pos = 0; pos <= 180; pos += 1) 
  {                                  
    myservo.write(pos);      
    delay(10);                    
} 
void down(){
  for(pos = 180; pos>=0; pos-=1)     
  {                                
    myservo.write(pos);              
    delay(15);                     
  } 
} 