int led=3;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  int sensor_data= analogRead(A0);//value is 0 - 1023
  int brightness= map(sensor_data,0,1023,0,255);
  analogWrite(led,brightness);
  delay(100);
}