
int led = 13;

void setup() {                
 
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);  
  delay(3000);              
  digitalWrite(led, LOW);    
  delay(3000);               
}
