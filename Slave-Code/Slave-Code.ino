#include <Wire.h>

void setup() {
  Wire.begin(2);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}
void loop() {
  delay(250);
  Wire.requestForm(4, 5);
}
void receiveEvent() {
  while (Wire.available() > 1) {
    char c = Wire.read();
    Serial.print(c);
  }
}
//کد اسلیو یا سمت کلاینت جهت ارتباط سریال 
//Slave or client-side code for serial communication .