#include <Wire.h>

short age = 0;
void setup() {
  Wire.begin();
}

void loop() {
  Wire.beginTransmission(2);
  Wire.write("Age is =");
  Wire.write("age");
  Wire.endTransmission();
  delay(1000);
}
//کد مستر جهت ارتباط سریال 
// Master code for serial communication