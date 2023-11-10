#include <LiquidCrystal.h>                                               // Install required libraries .
const int rs=12 , en=11 , d4=5 , d5=4 , d6= 3 , d7=2 ;                  // Setting up the ports that connect to the LCD .
LiquidCrystal lcd(rs, en ,d4, d5 , d6 , d7);                           // Setting up the ports that connect to the LCD .
int trig=9;                                                           // Defining base 9 as trig .
int echo=10;                                                         // Defining base 10 as echo .
int led= 6;                                                         // Defining base 6 as led .
int timer=10;                                                      // Defining the timer and assigning it a value .
void setup()(                                                    
{                                                                
  pinMode(trig,OUTPUT);                                         // Define the trig pin as an OUTPUT pin .
  pinMode(echo,INPUT);                                         // Define the echo pin as an INPUT pin .
  Serial.begin(9600);                                         // Serial definition for communication .
  lcd.begin(16,2);                                           // Set the LCD resolution .
  pinMode(led , OUTPUT);                                    // Define the LED pin as an OUTPUT pin .
}

void loop()                                              
{                                                       
  digitalWrite(trig,LOW);                              // We disable the trig base .
  delayMicroseconds(2);                               // We delay by 2 microseconds .
  digitalWrite(trig,HIGH);                           // We enable the trig base .
  delayMicroseconds(10);                            // We delay by 10 microseconds . 
  digitalWrite(trig,LOW);                          // We disable the trig base .
  int t = pulseIn(echo , HIGH);                   // We enable the echo base .
  float distance=t*0.034/2;                      // We must use this formula to find the distance.
  lcd.setCursor(0 , 0);                         // Setcursor
  lcd.print("distance: ");                     // Print the desired message on the LCD
  lcd.print(distance);                        // Print the desired message on the LCD
  Serial.print(distance);                    // Print the desired message on the Serial monitor
  delay(10);                                // 10 milliseconds delay
  lcd.clear();                             // Clear the LCD screen
  float x = map(distance , 4,30,255,0);   // 
  if(distance<=4)                        // اگر فاصله کمتر از 4 بود 
  {                                     // 
    digitalWrite(led,HIGH);            // Turn on the LED
  }else if (distance >= 32)           // اگر فاصله بیش تر از 32 بود 
  {                                  // 
    digitalWrite(led,LOW);          // Turn off the LED
  }else
  {
    digitalWrite(led,x);         //
  }
}
