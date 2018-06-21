
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>



void setup() {
  // put your setup code here, to run once:


Tft.TFTinit();  
Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
     
    Tft.drawString("I was having such an ",0,140,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("amazing dream about.",0,180,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    delay (6000);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    delay (4000);
    Tft.drawString("KILLING",30,100,4,RED); 
    Tft.drawString("ALL HUMANS",0,150,4,RED);
    delay (4000);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    
       Tft.drawHorizontalLine (27,245,185,CYAN); 
  Tft.fillCircle(60, 150, 40,WHITE);  // look right
   Tft.fillCircle(176, 150, 40,WHITE);
  
 Tft.fillCircle(60, 150, 22,RED); 
   Tft.fillCircle(176, 150, 22,RED);
   
   Tft.fillCircle(68, 140, 8,WHITE);  
   Tft.fillCircle(184,140, 8,WHITE); 
   delay (4000);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    
    
    Tft.drawString("Just Kidding!",5,150,3,CYAN); 
    
    delay (4000);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    
       Tft.drawHorizontalLine (27,245,185,CYAN); 
  Tft.fillCircle(60, 150, 40,WHITE);  // look right
   Tft.fillCircle(176, 150, 40,WHITE);
   Tft.fillCircle(60, 150, 20,RED); 
   Tft.fillCircle(176, 150, 20,RED);
    Tft.fillCircle(68, 140, 8,WHITE);  
   Tft.fillCircle(184,140, 8,WHITE); 
 delay (2500);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
