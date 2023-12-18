#include <SoftwareSerial.h>
SoftwareSerial HM10(0, 1);  // RX = 2, TX = 3
char appData;
String inData = "";
int timer = 2000;
const int DO = 6;
const int buzzer = 5;  //buzzer to arduino pin 9

void setup() {
  Serial.begin(9600);
  Serial.println("HM10 serial started at 9600");
  HM10.begin(9600);         // set HM10 serial at 9600 baud rate
  pinMode(13, OUTPUT);      // onboard LED
  digitalWrite(13, LOW);    // switch OFF LED
  pinMode(buzzer, OUTPUT);  // Set buzzer - pin 9 as an output
}

void loop() {
  int alarm = 0;
  float sensor_volt;
  float RS_gas;
  float ratio;
  //-Replace the name "R0" with the value of R0 in the demo of First Test -/
  float R0 = 0.91;
  int sensorValue = analogRead(A0);
  sensor_volt = ((float)sensorValue / 1024) * 5.0;
  RS_gas = (5.0 - sensor_volt) / sensor_volt;  // Depend on RL on yor module
  ratio = RS_gas / R0;                         // ratio = RS/R0
                                               //------------------------------------------------------------/
  Serial.print("sensor_volt = ");
  Serial.println(sensor_volt);
  Serial.print("RS_ratio = ");
  Serial.println(RS_gas);
  Serial.print("Rs/R0 = ");
  Serial.println(ratio);
  Serial.print("\n\n");
  alarm = digitalRead(DO);
  delay(timer)

  if (alarm == 1) {

    digitalWrite(13, LOW);
  } else if (alarm == 0) {
    digitalWrite(13, HIGH);


    tone(buzzer, timer);  // Send 1KHz sound signal...
    delay(timer);         // ...for 1 sec
    noTone(buzzer);      // Stop sound...
    delay(timer);         // ...for 1sec
  }
  HM10.listen();  // listen the HM10 port

  while (HM10.available() > 0) {  // if HM10 sends something then read
    // Serial.println("*");
    appData = HM10.read();
    inData = String(appData);  // save the data in string format
    Serial.write(appData);
  }


  if (Serial.available()) {  // Read user input if available.
    delay(500);
    HM10.write(Serial.read());
  }
  if (inData == "F") {
    Serial.println("LED OFF");
    digitalWrite(13, LOW);  // switch OFF LED
    delay(timer);
  }
  if (inData == "N") {
    Serial.println("LED ON");
    digitalWrite(13, HIGH);  // switch ON LED
    delay(timer);
    // digitalWrite(13, LOW); // switch OFF LED
    // delay(timer);
  }
}