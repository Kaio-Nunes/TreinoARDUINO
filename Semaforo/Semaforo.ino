
#define pinGreenLED 3
#define pinYellowLED 2
#define pinRedLED 1
  
void setup() {
pinMode(3, INPUT);
pinMode(2, INPUT);
pinMode(1, INPUT);
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
  digitalWrite(pinYellowLED, HIGH);
  delay(1000);
  semaforoPiscaAlerta();
  }
