#include <Keypad.h>
const byte ROWS = 4; // four rows
const byte COLS = 4; // four columns
// define the cymbols on the buttons of the keypads
float firstnumber = 0;
float secondnumber = 0;
float resulet = 0;
bool section = false ;
int type = 0;
int LED = 10;
int valueCode = 123;
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5};//  connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; // connect to the column pinouts of the keypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  char key = customKeypad.getKey() ;
  if (key)
  {
    static String C = "";
    if (key == '#' )
    {
      if (C.equals("120"))
      {
        digitalWrite(LED, HIGH);
      }
      else
      {
        digitalWrite(LED, LOW);
      }
      C = "";
    }
    else
    {
      C += key;
    }

  }
}

