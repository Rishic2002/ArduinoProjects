#define trigPin 9
#define echoPin 10
void setup() {
  // put your setup code here, to run once:
pinMode (trigPin,OUTPUT);
pinMode (echoPin,OUTPUT);
Serial.begin (9600);



}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (trigPin,HIGH);
delayMicroseconds (2);
digitalWrite (trigPin,LOW);

digitalWrite (trigPin,HIGH);
delayMicroseconds (10);
digitalWrite (trigPin,LOW);

duration=pulseIn (echoPin,HIGH);
duration=duration/2;
distance=duration/29.1;
Serial.println (distance);
}
