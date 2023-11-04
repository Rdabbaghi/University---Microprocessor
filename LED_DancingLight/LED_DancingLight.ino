// Define required variables
int led1=1;                                             // Define required variables
int led2=2;                                            // Define required variables
int led3=3;                                           // Define required variables
int led4=4;                                          // Define required variables
int led5=5;                                         // Define required variables
int timer =500;                                    // Define delay variable
void setup()                                      //
{                                                //
  for (int  pin=2; pin < 7 ; pin++)             // Identify pins as output
  pinMode(pin, OUTPUT);                        // Identify pins as outputs
}                                             //
void loop()                                  //
{                                           //
  for (int pin = 2 ; pin < 8 ; pin ++)     // Definition of the repetition loop for turning on and off the leds
  {                                       //
    digitalWrite(pin,HIGH);              // Turn on the lights in sequence
    delay(timer);                       // Wait for second 
    digitalWrite(pin - 1 ,LOW);        // Turn off the lights in sequence
  }

}
