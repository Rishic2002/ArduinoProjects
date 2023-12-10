int lm, rm;

#define trigPin 9
#define echoPin 10
long duration, distance;

void setup() {
  // put your setup code here, to run once:
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode(A0, INPUT); //Left Sensor
  pinMode(A1, INPUT); //Right Seneor
  pinMode(2, OUTPUT); //Left motor direction
  pinMode(3, OUTPUT); //Left motor speed
  pinMode(4, OUTPUT); //Right motor direction
  pinMode(5, OUTPUT); //Right motor speed
  pinMode(13, OUTPUT); //Buzzer to indicate
  int lw = analogRead (A0);
  int rw = analogRead (A1);
  digitalWrite(13, HIGH); //Buzzer ON
  delay (500);
  digitalWrite(13, LOW); //Buzzer OFF
  delay (3000);
  int lb = analogRead(A0);
  int rb = analogRead(A1);
  digitalWrite(13, HIGH); //Buzzer ON
  delay (500);
  digitalWrite(13, LOW); //Buzzer OFF
  lm = (lb + lw) / 2;
  rm = (rb + rw) / 2;

}

void loop() {
  // put your main code here, to run repeatedly:
  int l = analogRead(A0);
  int r = analogRead(A1);
    digitalWrite (trigPin, HIGH);
  delayMicroseconds (2);
  digitalWrite (trigPin, LOW);
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  duration = duration / 2;
  distance = duration / 29.1;
  if (l < lm && r < rm); { //go straight
    digitalWrite(2, LOW);
    analogWrite(3, 200);
    digitalWrite(4, LOW);
    analogWrite(5, 200);
  }

  if (l > lm && r < rm); {
    //Right turn
    digitalWrite(2, LOW);
    analogWrite(3, 250);
    digitalWrite(4, LOW);
    analogWrite(5, 0);

  }

  if (l < lm && r > rm) {
    //Left Turn
    digitalWrite(2, LOW);
    analogWrite(3, 0);
    digitalWrite(4, LOW);
    analogWrite(5, 250);
  }
  if (l > lm && r > rm) {
    //Do nthing
    digitalWrite(2, LOW);
    analogWrite(3, 250);
    digitalWrite(4, LOW);
    analogWrite(5, 250);
  }
  if (distance < 15) {
    digitalWrite(2, LOW);
    analogWrite(3, 0);
    digitalWrite(4, LOW);
    analogWrite(5, 0);
  }
}
