int mean;
void setup() {
  // put your setup code here, to run once:
pinMode (13,OUTPUT);
int black=analogRead(A0);
int white=analogRead(A0);
mean= (black+white)/2;
}
void loop() {
  // put your main code here, to run repeatedly:
int value= analogRead(A0);
if (value>mean)
{
digitalWrite (13,HIGH);
}
else
{
digitalWrite(13,LOW);
}
}
