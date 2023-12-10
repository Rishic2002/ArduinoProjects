int mean;
void setup() {
  // put your setup code here, to run once:
int black= analogRead(A0);
delay(2000);
int white= analogRead(A0);
mean= (black+white)/2;
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value= analogRead(A0);
if(value>mean)
digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);
}
