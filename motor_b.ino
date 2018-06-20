void setup() {
  
 

  //Setup Channel B
  pinMode(11, OUTPUT); //Initiates Motor Channel A pin
  pinMode(8, OUTPUT);  //Initiates Brake Channel A pin
  
}

void loop(){
    delay (4000);
  
  //Motor A forward @ full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel A
  analogWrite(11, 255);   //Spins the motor on Channel A at full speed

  
  
  delay(1500);

  
  digitalWrite(8, HIGH);  //Engage the Brake for Channel B


  delay(1500);
  
  
  //Motor A forward @ full speed
  digitalWrite(13, LOW);  //Establishes backward direction of Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel A
  analogWrite(11, 255);    //Spins the motor on Channel A at half speed
  
 
  
  delay(1500);
  
  
  digitalWrite(8, HIGH);  //Engage the Brake for Channel B
  
  
  delay(1500);
  
}
