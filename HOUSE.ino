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
    TFT_BL_OFF;      // turn on the background light
    Tft.TFTinit();  // init TFT library

   
    Tft.drawRectangle(80, 106, 70,100,WHITE);
    
}

void loop()
{
  
}
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
