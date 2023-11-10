void setup() 
{
  Serial.begin(9600);  
}
void loop() 
{
  if (Serial.available() > 0 )
  {
    int Number =Serial.parseInt();
    int Dnumber = Number *2;
    Serial.println("Double of :");
    Serial.println(Number);
    Serial.println("is");
    Serial.println(Dnumber);
  }
}
