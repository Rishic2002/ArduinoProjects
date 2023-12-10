/*
  Arduino Turn LED On/Off using Serial Commands
  Created April 22, 2015
  Hammad Tariq, Incubator (Pakistan)

  It's a simple sketch which waits for a character on serial
  and in case of a desirable character, it turns an LED on/off.

  Possible string values:
  a (to turn the LED on)
  b (tor turn the LED off)
*/

char junk;
String inputString = "";

void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);

}

void loop()
{
  if (Serial.available()) {
    while (Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)
    {
      junk = Serial.read() ;  // clear the serial buffer
    }
    if (inputString == "L") {       //left
      digitalWrite(5, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);

    }
    if (inputString == "R") { //Right
      digitalWrite(5, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
    if (inputString == "F") {       //forward
      digitalWrite(5, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }

    if (inputString == "B") { //back
      digitalWrite(5, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);

    }
    if (inputString == "S") {       //stop
      digitalWrite(5, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    
  }
}
