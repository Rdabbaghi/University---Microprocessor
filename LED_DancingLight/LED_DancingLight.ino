// Define required variables
int led1=1;
int led2=2;
int led3=3;
int led4=4;
int led5=5;
int timer =500;



void setup() {
  for (int  pin=2; pin < 7 ; pin++)     // Identify pins as outputs
  
  pinMode(pin, OUTPUT);                 // Identify pins as outputs

}

void loop() {
  for (int pin = 2 ; pin < 8 ; pin ++)
  {
    digitalWrite(pin,HIGH);       // Turn on the lights in sequence
    delay(timer);                 // Wait for second 

    digitalWrite(pin - 1 ,LOW);    // Turn off the lights in sequence
  }

}
