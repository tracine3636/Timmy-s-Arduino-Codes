
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>



void setup() {
  // put your setup code here, to run once:


Tft.TFTinit();  
Tft.fillRectangle(0, 0, 400,800,BLUE
);
   delay (800);
     
    Tft.drawString("  Greetings Mammal, ",0,30,2.5,WHITE); 
    Tft.drawString(" The HUMAN known as ",0,70,2.5,WHITE);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString(" RACINE ",0,120,5,CYAN); 
   Tft.drawString("   Is momentarily ",0,180,2.5,WHITE);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("Out of Office.",0,210,3,WHITE); 
   
    delay (6000);
    
   
}


void loop() {
  Tft.drawString(" Please dont forget ",0,280,2,RED); 
  Tft.drawString(" to tip the Robot!!!",0,300,2,RED); 
  delay (300);
  Tft.drawString(" Please dont forget ",0,280,2,BLUE); 
  Tft.drawString(" to tip the Robot!!!",0,300,2,BLUE); 
  delay (300);
  Tft.drawString(" Please dont forget ",0,280,2,RED); 
  Tft.drawString(" to tip the Robot!!!",0,300,2,RED); 
  delay (300);
  Tft.drawString(" Please dont forget ",0,280,2,BLUE); 
  Tft.drawString(" to tip the Robot!!!",0,300,2,BLUE);
 delay(300); 
}
