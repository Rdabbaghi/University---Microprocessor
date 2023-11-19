/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/
#include <Keypad.h>
int led = 13;
const byte ROWS = 4;  //four rows
const byte COLS = 4;  //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '.', 'D', '=', 'D' }
};

byte rowPins[ROWS] = { 3, 2, 1, 0 };  //connect to the row pinouts of the keypad
byte colPins[COLS] = { 7, 6, 5, 4 };  //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad C = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
void setup() {
  Serial.begin(9600);
}
void loop() {
  char customKey = customKeypad.getKey();
  if (customKey)
   {
    Serial.println(customKey);
  }
  if (C == '1') 
  {
    digitalWrite(led, HIGH);
  }
   else if (C == '2')
    {
    digitalWrite(led, LOW);
  } 
  else
   {
  }
}
