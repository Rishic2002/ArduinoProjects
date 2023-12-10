
String message;
void setup() {
  Serial.begin(9600);
  Serial.flush();
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  message = "";
  while (Serial.available() > 0) {
    message += (char) Serial.read();
  }
  if (message == 'f') {// move forward

    digitalWrite(2, LOW);
    digitalWrite(3, 250);
    digitalWrite(4, LOW);
    digitalWrite(5, 250);
  }
  if (message == 'b') {// move backward
    digitalWrite(2, HIGH);
    digitalWrite(3, 0);
    digitalWrite(4, HIGH);
    digitalWrite(5, 0);

  }
  if (message == 'l') {// move left
    digitalWrite(2, LOW);
    digitalWrite(3, 0);
    digitalWrite(4, LOW);
    digitalWrite(5, 250);

  }
  if (message == 'r') {// move right
    digitalWrite(2, LOW);
    digitalWrite(3, 0);
    digitalWrite(4, LOW);
    digitalWrite(5, 250);

  }
  if (message == 's') {// stop
    digitalWrite(2, LOW);
    digitalWrite(3, 0);
    digitalWrite(4, LOW);
    digitalWrite(5, 0);

  }
}
