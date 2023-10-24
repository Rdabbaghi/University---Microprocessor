#include <LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;               // Definition of lcd bases
LiquidCrystal lcd (rs , en , d4 , d5 , d6 , d7 );       // Definition of lcd bases
void setup ()
{
  pinMode(A3,INPUT);                                 // Input port definition
  serial.begin(9600);                               // Definition of series
  lcd.begin(16,2);                                 // Definition of resolution
  lcd.print(" (: Hellow Friend :) ");             // show the desired message

}
void loop()
{
  int val = analogRead(A3);                  // Get the value from the defined base
  serial.print("POT Voltage :");            // show the desired message
  float d =val * 5 / 1023;                 // 
  serial.println(d);                      // show the desired message
  lcd.setCursor(0,1);                    // Setting the location of the posts
  lcd.print(d);                         // show the desired message

}