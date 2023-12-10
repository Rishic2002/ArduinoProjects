String message;
void setup() {
  // put your setup code here, to run once:
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);

  Serial.begin (9600);
  Serial.flush ();
}

void loop() {
 
    digitalWrite (7, LOW);
    analogWrite (8, 200);
    digitalWrite (9, LOW);
    analogWrite (10, 200);
 
}
