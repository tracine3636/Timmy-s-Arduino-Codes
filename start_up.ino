
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>



void setup() {
  // put your setup code here, to run once:


Tft.TFTinit();  
Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
     Tft.drawHorizontalLine(0,0,400,GREEN);
    Tft.drawHorizontalLine(0,130,400,GREEN);
    Tft.drawString("Start Up Mode",2,140,3,GREEN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("(Engaged)",35,180,3,GREEN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,210,400,GREEN);
    Tft.drawHorizontalLine(0,400,400,GREEN);
    delay (800);
}

void loop() {
  // put your main code here, to run repeatedly:

}
