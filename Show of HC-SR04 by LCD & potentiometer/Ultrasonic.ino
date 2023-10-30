#include <LiquidCrystal.h>
const int rs=12 , en=11 , d4=5 , d5=4 , d6=3 , d7=2 ;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);
int trig = 9;
int echo = 10;
void setup() 
{
  lcd.begin(16,2);
  pinMode(trig,OUTPUT);
  pinMode(trig,OUTPUT);
}

void loop() 
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  float duration = pulseIn(echo , HIGH);
  float m = (duration /2 ) * 0.0346;
  lcd.setCursor(6,0);
  lcd.print(" cm: ")
  lcd.print(m);
  delay(500);
  lcd.clear();

}
