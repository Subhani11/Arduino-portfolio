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
	int sen_read= analogRead(A0);
  int angle= map(sen_read,0,1023,0,180);
  //myservo.write(angle);
  //delay(10);
  for(int i=0; i<=angle; i++)
  {
    myservo.write(i);
    delay(10);
  }
}