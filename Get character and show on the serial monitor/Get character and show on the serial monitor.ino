void setup()                                             
{                                                       
  Serial.begin(9600);                                  // Serial definition for communication
}                                                     
void loop()                                          
{                                                   
  if (Serial.available()>0)                        // If the value of a series was more than 0, do the following
  {                                               
    char receivedChar = Serial.read ();          // It receives the serial number and prints its value inside the character 
                                                
    if (receivedChar == 'A')                   // If the value you received was equal to A, do the following
    {                                         
      Serial.println("Character A");         // Print the desired value in the serial monitor
    }                                       
    else                                   
    {                                     
      Serial.println(" A not found ");   // Print the desired value in the serial monitor
    }
  }
}