
  int greenLedPin = 2;
  int yellowLedPin = 1;
  int redLedPin = 0;
  
void setup() {

}

void loop() {
   
  digitalWrite(redLedPin, LOW); 
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(2000);    // wait 2 seconds
  
  digitalWrite(redLedPin, LOW); 
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(1000);   // wait 1 second
  
  // turn the red LED on and the other LEDs off
  digitalWrite(redLedPin, HIGH); 
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  delay(3000);  // wait 3 seconds   

}
