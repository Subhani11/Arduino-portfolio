#define sig 7

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Trigger
  pinMode(sig, OUTPUT);
  digitalWrite(sig, LOW);
  delayMicroseconds(2);
  digitalWrite(sig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sig, LOW);

  // Echo read
  pinMode(sig, INPUT);
  long pulse_duration = pulseIn(sig, HIGH); // timeout prevents freezing

  if(pulse_duration == 0){
    Serial.println("No echo");
    return;
  }

  long distance = (pulse_duration * 0.0343) / 2;

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);
}
