int lm, rm;
void setup() {
  // put your setup code here, to run once:
  pinMode (A0, INPUT); //left sensor
  pinMode (A1, INPUT); //right sensor

  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);

  pinMode (13, OUTPUT); //Buzer
  
  digitalWrite (13, HIGH); //Buzer ON
  delay(1000);
  int lw = analogRead (A0);
  int rw = analogRead (A1);
  digitalWrite (13, LOW); //Buzer OFF
  delay(2000);
  digitalWrite (13,HIGH);
  delay(1000); 
  int lb = analogRead (A0);
  int rb = analogRead (A1);
  digitalWrite (13,LOW);

  lm = (lw = lb) / 2;
  rm = (rw + rb) / 2;
}

void loop() {
  // put your main code here, to run repeatedly:
  int lvalue = analogRead (A0);
  int rvalue = analogRead (A1);

  if
  (lvalue < lm && rvalue < rm) {
    digitalWrite (2,LOW);
    analogWrite (3,200);
    digitalWrite (4,LOW);
    analogWrite (5,200);
    }
  if (lvalue > lm && rvalue < rm){
  digitalWrite (2,LOW);
    analogWrite (3,200);
    digitalWrite (4,LOW);
    analogWrite (5,0);
  }
  if (lvalue < lm && rvalue > rm){
    digitalWrite (2,LOW);
    analogWrite (3,0);
    digitalWrite (4,LOW);
    analogWrite (5,200);
  }
  if (lvalue > lm && rvalue > rm){
    digitalWrite (2,LOW);
    analogWrite (3,200);
    digitalWrite (4,LOW);
    analogWrite (5,200);
};
}








