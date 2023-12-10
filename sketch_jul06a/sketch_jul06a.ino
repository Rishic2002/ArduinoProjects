void setup(){
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
int i=1;
Serial.println(i);
for(i=1 ,<=1000 ,i=i+1);
Serial.println(i);
}
void loop(){
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  delay(2000);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
}
