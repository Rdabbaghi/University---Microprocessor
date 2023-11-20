#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object
const int buttonPin=10;

void setup() {
  byte numDigits = 1;
  byte digitPins[] = {};
  byte segmentPins[] = {3,2,8,7,6,4,5,9};
  bool resistorsOnSegments = True; // 'false' means resistors are on digit pins 
  sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
  pinMode(buttonPin,INPUT)

}

void loop() 
{
  buttonState=digitalRead(buttonPin);

  if (ButtonState == HIGH)
  {
    sevseg.setNumber(random(1,7));
    sevseg.refreshDisplay();
  }