int ledpin=13;
int timer = 10000;
// In this section, we make the initial settings
void setup() 
{
  pinMode(ledpin, OUTPUT);
}

// We write the part that we want to repeat continuously here
void loop()
 {
  digitalWrite(ledpin, HIGH);          // turn the LED on (HIGH is the voltage level)
  delay(timer);                       // wait for a second
  digitalWrite(ledpin, LOW);         // turn the LED off (LOW is the voltage level)
  delay(timer);                     // wait for a second
}
