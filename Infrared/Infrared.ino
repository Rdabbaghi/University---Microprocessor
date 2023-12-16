const int sensorPin=2;
const int ledPin=13;

void setup() {
  pinMode(sensorPin,INPUT);
  pinMode(ledPin,OUTPUT);  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(sensorPin) == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    Serial.println("Motion detected");

  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Motion not detected");
  }
  delay(100)
  // put your main code here, to run repeatedly:

}
