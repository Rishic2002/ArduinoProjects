String message;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
Serial.flush ();
}

void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available()>0){
  message+=(char)Serial.read();
}
 if(message=="Hello"){
  Serial.println ("Hi");
 message ="";
 }
}
