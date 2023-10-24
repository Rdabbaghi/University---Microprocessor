#include <LiquidCrystal.h>
int green = 7;
int red = 13;
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd (rs , en , d4 , d5 , d6 , d7 );
const int lm35=A0;
float data ;
float temp ;
int timer = 2000;
//################
void setup ()
{
  pinMode(7,OUTPUT);                       // Introducing the OUTPUT pin
  pinMode(13,OUTPUT);                      // Introducing the OUTPUT pin
  serial.begin(9600);                      // Introducing the series
  lcd.begin(16,2);                         // Introducing LCD resolution
  
}
void loop()
{
  int val=analogRead(lm35);
  temp=(val * 0.48828125);
  lcd.print("TEMP:");
  lcd.print(temp);
  lcd.print ("*C");
  Serial.print("TEMP: ");
  Serial.print(temp);
  Serial.print(" *C");
  delay(timer);
  if (temp > 25)
  {
    lcd.setCursor(0,1);
    digitalWrite(red,HIGH);
    lcd.print("!WARM!");
    digitalWrite(green,LOW);
  }
  else 
  {
    lcd.setCursor(0,1);
    digitalWrite(green,HIGH);
    lcd.print("COOL :)");
    digitalWrite(red,LOW);
  }
} 