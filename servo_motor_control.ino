// C++ code
//
#include <Servo.h>
Servo myservo; // created servo object
void setup()
{

  myservo.attach(8);
}

void loop()
{
  for(int angle=0; angle<=180; angle++)
  {
    myservo.write(angle);
      delay(10);
  }
  for(int angle=180; angle>=0; angle--)
  {
    myservo.write(angle);
      delay(10);
  
  }
}