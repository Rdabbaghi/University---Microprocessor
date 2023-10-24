#include <LiquidCrystal.h>
#include <DHT.h>
#include <Adafruit_sensor.h>
DHT dht
#define DHTPIN 6
#define DHTTYPE DHT11
DHT dht (DHTPIN , DHTTYPE);
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
  dht.begin();
  pinMode(6,INPUT);                        // Introducing the INPUT pin
  pinMode(7,OUTPUT);                       // Introducing the OUTPUT pin
  pinMode(13,OUTPUT);                      // Introducing the OUTPUT pin
  serial.begin(9600);                      // Introducing the series
  lcd.begin(16,2);                         // Introducing LCD resolution
  
}
void loop()
{
  data=dht.readHumidity();
  temp=dht.readTemperature();
  lcd.print("temp: ");
  lcd.print(temp);
  lcd.print(" *C");
  lcd.setCursor(0,1);
  lcd.print("Humid :");
  lcd.print(data);
  Serial.print("temp: ");
  Serial.print(temp);
  Serial.print(" *C");
  Serial.setCursor(0,1);
  Serial.print("Humid :");
  Serial.print(data);
  Serial.print("%");
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