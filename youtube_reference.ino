/*  Draw Boxes - Demonstrate drawRectangle and fillRectangle
    fillScreen(INT16U XL,INT16U XR,INT16U YU,INT16U YD,INT16U color);
    fillRectangle(INT16U poX, INT16U poY, INT16U length, INT16U width, INT16U color);
    drawRectangle(INT16U poX, INT16U poY, INT16U length,INT16U width,INT16U color);
*/
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    TFT_BL_ON;      // turn on the background light
    Tft.TFTinit();  // init TFT library

   
    Tft.drawString("You can see more",20,30,2.5,CYAN);
    delay(550);
    Tft.drawString("of my projects on",15,50,2.5,CYAN);
    delay(550);
    Tft.fillRectangle(40, 80, 150,140,WHITE);
    Tft.fillRectangle(50, 130, 130,80,RED);
    Tft.drawString("You",68,90,5.9,BLACK);
   Tft.drawString("Tube",52,160,5.7,WHITE);
  delay(550); 
   Tft.drawString("at",105,230,2,CYAN);
   delay(750);
  Tft.drawString("timmylee28",25,260,3,CYAN); 
}

void loop()
{
  
}
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
