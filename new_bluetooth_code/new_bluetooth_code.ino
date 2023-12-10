
#include <SoftwareSerial.h>// import the serial library
int BluetoothData; // the data given from Computer

void setup() {

  pinMode(13, OUTPUT);

  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    BluetoothData = Serial.read();
    if (BluetoothData == 'e'); {
      //left

      pinMode (13, HIGH);

    }
    if (BluetoothData == 't'); {
      //rigt

      pinMode (13, LOW);
    }
  }
}

