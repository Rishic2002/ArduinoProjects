char message;
void setup() {
  // put your setup code here, to run once:
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);

  Serial.begin (9600);
  Serial.flush ();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    message = Serial.read();
  }
  if (message == 'f') {
    digitalWrite (2, LOW);
    analogWrite (3, 200);
    digitalWrite (4, LOW);
    analogWrite (5, 200);
  }
  if (message == 'l') {
    digitalWrite (2, LOW);
    analogWrite (3, 0);
    digitalWrite (4, LOW);
    analogWrite (5, 200);
  }
  if (message == 'r') {
    digitalWrite (2, LOW);
    analogWrite (3, 200);
    digitalWrite (4, LOW);
    analogWrite (5, 0);
  }
  if (message == 's') {
    digitalWrite (2, LOW);
    analogWrite (3, 0);
    digitalWrite (4, LOW);
    analogWrite (5, 0);
  }
  if (message == 'b') {
    digitalWrite (2, HIGH);
    analogWrite (3, 0);
    digitalWrite (4, HIGH);
    analogWrite (5, 0);
  }
}

