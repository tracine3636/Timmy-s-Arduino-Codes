/*  draw text's APP
    drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor);
    drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor);
*/

#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    TFT_BL_ON;      // turn on the background light
    Tft.TFTinit();  // init TFT library
    
    
}

void loop()

{

 
  Tft.drawHorizontalLine(0,0,400,BLUE);
    Tft.drawHorizontalLine(0,120,400,BLUE);
    Tft.drawString("Start Up Mode",0,140,3,GREEN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
      // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,180,400,BLUE);
    Tft.drawHorizontalLine(0,400,400,BLUE);
  
    delay(100);
}
