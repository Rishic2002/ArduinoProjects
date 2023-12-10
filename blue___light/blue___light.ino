char message;

void setup() {
  // put your setup code here, to run once:
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);

  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);

  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode (14, OUTPUT);
  pinMode (15, OUTPUT);





  Serial.begin (9600);
  Serial.flush ();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    message = Serial.read();
  }
  if (message == 'f') {
    digitalWrite (2, LOW);
    analogWrite (3, 240);
    digitalWrite (4, LOW);
    analogWrite (5, 240);
    digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
 digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
 
 digitalWrite (10, LOW);
  digitalWrite (11, LOW);
 digitalWrite (12, LOW);
  digitalWrite (13, LOW);


 


  }
  if (message == 'l') {
    digitalWrite (2, LOW);
    analogWrite (3, 0);
    digitalWrite (4, LOW);
    analogWrite (5, 240);
    digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
 digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);

 digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  

 digitalWrite (12, LOW);
  digitalWrite (13, LOW);


  }
  if (message == 'r') {
    digitalWrite (2, LOW);
    analogWrite (3, 240);
    digitalWrite (4, LOW);
    analogWrite (5, 0);
    digitalWrite (6, LOW);
  digitalWrite (7, LOW);
 digitalWrite (10, LOW);
  digitalWrite (11, LOW);

 digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);

 digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);

  }
  if (message == 's') {
    digitalWrite (2, LOW);
    analogWrite (3, 0);
    digitalWrite (4, LOW);
    analogWrite (5, 0);
    digitalWrite (6, LOW);
  digitalWrite (7, LOW);
 digitalWrite (10, LOW);
  digitalWrite (11, LOW);

 digitalWrite (8, LOW);
  digitalWrite (9, LOW);

 digitalWrite (12, LOW);
  digitalWrite (13, LOW);
  }
  if (message == 'b') {
    digitalWrite (2, HIGH);
    analogWrite (3, 0);
    digitalWrite (4, HIGH);
    analogWrite (5, 0);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);


 digitalWrite (8, LOW);
  digitalWrite (9, LOW);

 digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);
    
 digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);

 


  }if (message =='o'){
    digitalWrite (14,HIGH);
  } if ( message == 'j'){
    digitalWrite (14,LOW);
  }
  
  }




