void setup() {
  // put your setup code here, to run on
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  analogWrite(11,250);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  }
