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
    
 
    
    Tft.drawString("",10,150,6,CYAN);   
Tft.drawRectangle(0, 0,256,320,WHITE);
Tft.fillScreen(256,256,256,256,BLUE);


    
    
    
    Tft.drawVerticalLine(120,0,2000,RED);     // Draw a vertical line
                                                // start: (60, 100) length: 100 color: green
                                            
    Tft.drawHorizontalLine(0,160,2000,BLUE);     //Draw a horizontal line
                                                //start: (30, 60), high: 150, color: blue

}

void loop()
{
  
}
