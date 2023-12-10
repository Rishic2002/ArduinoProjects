int lw,rw,lb,rb,ml,mr; 

void setup(){
pinMode(A0,INPUT); //Left Sensor
pinMode(A1,INPUT); //Right Sensor
pinMode(13,OUTPUT); //LED

digitalWrite(10,HIGH);
delay(5000);
lw = analogRead(A0);
rw = analogRead(A1);
digitalWrite(10,LOW);
delay(3000);
digitalWrite(10,HIGH);
delay(5000);
lb = analogRead(A0);
rb = analogRead(A1);
digitalWrite(10,LOW);
delay(3000);

ml = (lw+lb)/2;
mr = (rw+rb)/2;
delay(2000); 
}

void loop(){

}
    


