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

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
float firstnumber = 0;
float secondnumber = 0;
float resulet = 0;
bool section = false ;
int type = 0;
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {2,3,4,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,7,8,9}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int button = int(customKeypad.getKey()) - 48 ;
  if (0 <= button && button <= 10) {
    Serial.print(button);
    if (section == false)
    {
      firstnumber = firstnumber * 10 + button;
    }
    else
    {
      secondnumber = secondnumber * 10 + button;
    }
  }
  else
  {
    switch (button)
    {
      case 17:
        section = true;
        type = 1;
        Serial.println('+');
        break;
      case 18:
        section = true;
        type = 2;
        Serial.println('-');
        break;
      case 19:
        section = true;
        type = 3;
        Serial.println('*');
        break;
      case 20:
        section = true;
        type = 4;
        Serial.println('/');
        break;
      case -6:
        section = false;
        type = 0;
        Serial.println(' ');
        break;
      case -13:
        Serial.print('=');
        switch (type)
        {
          case 1:
            resulet = (firstnumber + secondnumber);
                      break;
          case 2:
            resulet = (firstnumber - secondnumber);
                      break;
          case 3:
            resulet = (firstnumber * secondnumber);
                      break;
          case 4:
            resulet = (firstnumber / secondnumber);
                      break;

        }
        type = 0;
        Serial.println(resulet);
        firstnumber = 0;
        secondnumber = 0;
        section = false;
        break;

    }
  }

}
