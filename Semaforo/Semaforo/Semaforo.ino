
  int greenLedPin = 3;
  int yellowLedPin = 2;
  int redLedPin = 1;
  
void setup() {

}

void loop() {
  semaforoLigado();
  digitalWrite(redLedPin,LOW);
}

void semaforoLigado(){
       
  digitalWrite(redLedPin, LOW); 
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, HIGH);
  delay(2000); 
  
  digitalWrite(redLedPin, LOW); 
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(greenLedPin, LOW);
  delay(1000);   
  

  digitalWrite(redLedPin, HIGH); 
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  delay(3000);    
} 
