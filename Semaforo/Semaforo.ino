
#define pinGreenLED 13
#define pinYellowLED 12
#define pinRedLED 11
  
void setup() {
pinMode(pinGreenLED, INPUT);
pinMode(pinYellowLED, INPUT);
pinMode(pinRedLED, INPUT);
}

void loop() {
  semaforoLigado();

}

void semaforoLigado(){
       
  digitalWrite(pinRedLED, LOW); 
  digitalWrite(pinYellowLED, LOW);
  digitalWrite(pinGreenLED, HIGH);
  delay(2000); 
  
  digitalWrite(pinRedLED, LOW); 
  digitalWrite(pinYellowLED, HIGH);
  digitalWrite(pinGreenLED, LOW);
  delay(1000);   
  

  digitalWrite(pinRedLED, HIGH); 
  digitalWrite(pinYellowLED, LOW);
  digitalWrite(pinGreenLED, LOW);
  delay(3000);    
} 

void semaforoPiscaAlerta(){
  digitalWrite(pinGreenLED, LOW);
  digitalWrite(pinRedLED, LOW);
  digitalWrite(pinYellowLED, LOW);
  delay(500);
  digitalWrite(pinYellowLED, HIGH);
  delay(500);
  }
