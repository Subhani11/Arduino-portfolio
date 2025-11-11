const int led= 13;
const int button = 2;
void setup(){
  pinMode(led,OUTPUT); 
  pinMode(button,INPUT);
  Serial.begin(9600); } 
void loop(){ 
  int data= digitalRead(button);
  if (data == HIGH){ 
    Serial.println("Button pressed"); 
    digitalWrite(led,HIGH); 
  } else{ 
    Serial.println("Button  not pressed");
    digitalWrite(led,LOW); }
  delay(100);
}