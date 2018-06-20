/*  Demo of draw circle's APP
    drawCircle(int poX, int poY, int r,INT16U color);
    fillCircle(int poX, int poY, int r,INT16U color);
*/

#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    TFT_BL_OFF;                                          //turn on the background light 
    
    Tft.TFTinit();                                      //init TFT library             

    Tft.drawVerticalLine(60,95,150,CYAN); 
    
   
  
    Tft.fillCircle(150, 100, 40,WHITE);                   
    
    Tft.fillCircle(150, 230, 40,WHITE);                  
    
    Tft.fillCircle(150, 100, 20,BLUE);     
     
    Tft.fillCircle(150, 230, 20,BLUE);  
  
    Tft.fillCircle(162, 238, 5,WHITE);  
  
    Tft.fillCircle(162, 108, 5,WHITE);  
 
 Tft.drawVerticalLine(60,95,150,GREEN); 
}


void loop()
{
   Tft.drawVerticalLine(60,95,150,CYAN); 
    
    Tft.fillCircle(150, 100, 40,WHITE);                   //center: (200, 100), r = 30 ,color : RED    
    
    Tft.fillCircle(150, 230, 40,WHITE);                  //center: (200, 200), r = 30 ,color : BLUE    

    Tft.fillCircle(150, 100, 20,BLUE);     
     
    Tft.fillCircle(150, 230, 20,BLUE);  
  
    Tft.fillCircle(162, 238, 5,WHITE);  
  
    Tft.fillCircle(162, 108, 5,WHITE);  
    
    delay (800);
   
    Tft.fillCircle(150, 100, 40, BLACK);                   //center: (200, 100), r = 30 ,color : RED    
    
    Tft.fillCircle(150, 230, 40,BLACK);   
 
 delay (800);

 
    Tft.fillCircle(150, 100, 40,WHITE);                   //center: (200, 100), r = 30 ,color : RED    
    
    Tft.fillCircle(150, 230, 40,WHITE);                  

    Tft.fillCircle(150, 120, 20,BLUE);     
     
    Tft.fillCircle(150, 250, 20,BLUE);  
    
    Tft.fillCircle(162, 258, 5,WHITE);  
  
    Tft.fillCircle(162, 128, 5,WHITE);  
    
 delay (800);   
   
    Tft.fillCircle(150, 100, 40,WHITE);                   
    
    Tft.fillCircle(150, 230, 40,WHITE);                  
    
    Tft.fillCircle(150, 100, 20,BLUE);     
     
    Tft.fillCircle(150, 230, 20,BLUE);  
  
    Tft.fillCircle(162, 238, 5,WHITE);  
  
    Tft.fillCircle(162, 108, 5,WHITE);  
 
    delay (800);
   
    Tft.fillCircle(150, 100, 40,WHITE);                   
    
    Tft.fillCircle(150, 230, 40,WHITE);                  
    
    Tft.fillCircle(150, 80, 20,BLUE);     
     
    Tft.fillCircle(150, 210, 20,BLUE);  
  
    Tft.fillCircle(162, 218, 5,WHITE);  
  
    Tft.fillCircle(162, 88, 5,WHITE);  
    
 
    
    
 
   delay (800);
  
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
