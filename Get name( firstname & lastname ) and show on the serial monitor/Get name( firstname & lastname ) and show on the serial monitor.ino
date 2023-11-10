void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
  if (Serial.available() > 0 )
  {
    String fullName=Serila.readStringUntil('\n');
    Serial.println("Name : " + fullName);
  }
}