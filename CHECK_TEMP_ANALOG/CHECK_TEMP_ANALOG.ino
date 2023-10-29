#include <LiquidCrystal.h>                                              // Library required for this project
int green = 7;                                                         // Basic definition number 7
int red = 13;                                                         // Basic definition number 13
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;                           // Definition of different bases
LiquidCrystal lcd (rs , en , d4 , d5 , d6 , d7 );                   // Definition of different bases
const int lm35=A0;                                                 // Define the analog zero base for the sensor
float data ;                                                      // Specify the variable type
float temp ;                                                     // Specify the variable type
int timer = 2000;                                               // Specify the type of the variable and set the value
//################
void setup ()
{
  pinMode(7,OUTPUT);                                         // Introducing the OUTPUT pin
  pinMode(13,OUTPUT);                                       // Introducing the OUTPUT pin
  serial.begin(9600);                                      // Introducing the series
  lcd.begin(16,2);                                        // Introducing LCD resolution
  
}
void loop()
{ 
  int val=analogRead(lm35);                          // Read Data
  temp=(val * 0.48828125);                          // Set value to temp
  lcd.print("TEMP:");                              // Show the desired message
  lcd.print(temp);                                // Show the desired message
  lcd.print ("*C");                              // Show the desired message
  Serial.print("TEMP: ");                       // Show the desired message
  Serial.print(temp);                          // Show the desired message
  Serial.print(" *C");                        // Show the desired message
  delay(timer);                              // Show the desired message
  if (temp > 25)                            // If the temperature value is more than 25, do the following
  {
    lcd.setCursor(0,1);                   // To run regularly and display the output below
    digitalWrite(red,HIGH);              // Turn on the red led
    lcd.print("!WARM!");                // Show the desired message
    digitalWrite(green,LOW);           // Turn off the green led
  }
  else 
  { 
    lcd.setCursor(0,1);             // To run regularly and display the output below
    digitalWrite(green,HIGH);      // Turn on the green led
    lcd.print("COOL :)");         // Show the desired message
    digitalWrite(red,LOW);       // Turn off the red led
  }
} 