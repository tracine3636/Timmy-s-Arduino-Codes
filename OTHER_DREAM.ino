
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>



void setup() {
  // put your setup code here, to run once:


Tft.TFTinit();  
 Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
   Tft.drawString("<<<<<<<<<<",0,50,4,YELLOW);
     Tft.drawString("My other amazing",25,100,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("dream was about.",25,140,2,CYAN);
Tft.drawString("SPACE!!!",35,180,4,WHITE); 
Tft.drawString(">>>>>>>>>>>",0,230,4,YELLOW);// draw string: "world!!", (80, 230), size: 4, color: WHITE
    delay (5000);
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
