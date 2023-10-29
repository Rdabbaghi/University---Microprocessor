#include <LiquidCrystal.h>                             // Library required for this project
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;            // Definition of different bases
LiquidCrystal lcd (rs , en , d4 , d5 , d6 , d7 );    // Definition of different bases
void setup ()                                       //
{                                                  //
  pinMode(A3,INPUT);                              // Introducing the input pin 
  serial.begin(9600);                            // Introducing the series
  lcd.begin(16,2);                              // Introducing LCD resolution
  lcd.print(" (: Hellow Friend :) ");          // Show the desired message
                                              //
}                                            //
void loop()                                 //
{                                          //
  int val = analogRead(A3);               // Get value from base A3
  serial.print("POT Voltage :");         // Print the desired message
  float d =val * 5 / 1023;              // Show the desired value
  serial.println(d);                   // Show the desired value
  lcd.setCursor(0,1);                 // To run regularly and display the output below
  lcd.print(d);                      // Show the desired message 
                                    //
}                                  //