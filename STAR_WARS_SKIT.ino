/*  draw text's APP
    drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor);
    drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor);
*/
#include <stdint.h>
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    TFT_BL_ON;      // turn on the background light
    Tft.TFTinit();  // init TFT library
      
      
      
      Tft.drawHorizontalLine(0,0,400,CYAN);
    Tft.drawHorizontalLine(0,130,400,CYAN);
    Tft.drawString("Sleep Mode",0,140,4,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("(Charging Battery)",15,180,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,210,400,CYAN);
    Tft.drawHorizontalLine(0,400,400,CYAN);
    delay (5000);
   
Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (1500);
     Tft.drawHorizontalLine(0,0,400,CYAN);
    Tft.drawHorizontalLine(0,130,400,RED);
    Tft.drawString("Sleep Mode",0,140,4,RED);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("(Terminated)",15,180,3,RED);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,210,400,RED);
    Tft.drawHorizontalLine(0,400,400,CYAN);
    delay (5000);

Tft.TFTinit();  
Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (1500);
     Tft.drawHorizontalLine(0,0,400,CYAN);
    Tft.drawHorizontalLine(0,130,400,GREEN);
    Tft.drawString("Start Up Mode",2,140,3,GREEN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("(Engaged)",35,180,3,GREEN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,210,400,GREEN);
    Tft.drawHorizontalLine(0,400,400,CYAN);
    delay (5000);
  
    
    
    Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
     
      Tft.drawHorizontalLine (27,245,185,CYAN); 
  Tft.fillCircle(60, 150, 40,WHITE);  // look right
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(80, 145, 22,BLUE); 
   Tft.fillCircle(196, 145, 22,BLUE);
 
   Tft.fillCircle(88, 135, 8,WHITE);  
   Tft.fillCircle(204,135, 8,WHITE); 
   delay (2000); 
   Tft.fillCircle(60, 150, 40,WHITE);  //look fowared
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(60, 150, 22,BLUE); 
   Tft.fillCircle(176, 150, 22,BLUE);
 
   Tft.fillCircle(68, 140, 8,WHITE);  
   Tft.fillCircle(184,140, 8,WHITE); 
   delay (2000); 
   
   Tft.fillCircle(60, 150, 40,WHITE);  //look left
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(40, 150, 22,BLUE); 
   Tft.fillCircle(156, 150, 22,BLUE);
 
   Tft.fillCircle(48, 140, 8,WHITE);  
   Tft.fillCircle(164,140, 8,WHITE); 
   delay (2000); 
   
   Tft.fillCircle(60, 150, 40,WHITE);  //look fowared
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(60, 150, 22,BLUE); 
   Tft.fillCircle(176, 150, 22,BLUE);
 
   Tft.fillCircle(68, 140, 8,WHITE);  
   Tft.fillCircle(184,140, 8,WHITE); 
   delay (2000); 
   
   Tft.fillCircle(60, 150, 40,WHITE);  //look up
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(60, 130, 22,BLUE); 
   Tft.fillCircle(176, 130, 22,BLUE);
 
   Tft.fillCircle(68, 120, 8,WHITE);  
   Tft.fillCircle(184,120, 8,WHITE); 
   delay (2000); 
   
   Tft.fillCircle(60, 150, 40,WHITE);  //look fowared
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(60, 145, 22,BLUE); 
   Tft.fillCircle(176, 145, 22,BLUE);
 
   Tft.fillCircle(68, 135, 8,WHITE);  
   Tft.fillCircle(184,135, 8,WHITE); 
   delay (2000); 
   
   Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
   
     Tft.drawString("I was having such an ",0,140,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("amazing dream about.",0,180,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    delay (4000);
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
     
     Tft.TFTinit();  
 Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
   Tft.drawString("<<<<<<<<<<",0,50,4,YELLOW);
     Tft.drawString("My other amazing",25,100,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("dream was about.",25,140,2,CYAN);
Tft.drawString("SPACE!!!",35,180,4,WHITE); 
Tft.drawString(">>>>>>>>>>>",0,230,4,YELLOW);// draw string: "world!!", (80, 230), size: 4, color: WHITE
    delay (5000);
     Tft.fillRectangle(0, 0, 400,800,BLACK);
     
     
     
     Tft.drawString("A long time ago ",0,80,2,CYAN);
     delay(2000);
    Tft.drawString("In a galaxy far away ",2,140,2,CYAN); 
     delay(2000);
     Tft.drawString("Like, really far! ",2,200,2,CYAN);   
    delay(3000);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    delay(2000);
    
    
    
    
    
    
    
    
    
    
    Tft.drawString("STAR",20,100,8,YELLOW); 
    Tft.drawString("WARS",20,170,8,YELLOW); 
    delay(4000);
    Tft.fillRectangle(0, 0, 400,800,BLACK);
    
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
   
   delay(4000);
       Tft.fillRectangle(0, 0, 400,800,BLACK);
       delay (200);
    Tft.drawHorizontalLine(0,0,400,CYAN);
    Tft.drawHorizontalLine(0,130,400,CYAN);
    Tft.drawString("Sleep Mode",0,140,4,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("(Charging Battery)",15,180,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,210,400,CYAN);
    Tft.drawHorizontalLine(0,400,400,CYAN);
    delay (800);
    
       Tft.fillRectangle(0, 0, 400,800,BLACK);
   delay (800);
     
      Tft.drawHorizontalLine (27,245,185,CYAN); 
  Tft.fillCircle(60, 150, 40,WHITE);  // look right
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(80, 145, 22,BLUE); 
   Tft.fillCircle(196, 145, 22,BLUE);
 
   Tft.fillCircle(88, 135, 8,WHITE);  
   Tft.fillCircle(204,135, 8,WHITE); 
   delay (2000); 
   Tft.fillCircle(60, 150, 40,WHITE);  //look fowared
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(60, 150, 22,BLUE); 
   Tft.fillCircle(176, 150, 22,BLUE);
 
   Tft.fillCircle(68, 140, 8,WHITE);  
   Tft.fillCircle(184,140, 8,WHITE); 
   delay (2000); 
   
   Tft.fillCircle(60, 150, 40,WHITE);  //look left
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(40, 150, 22,BLUE); 
   Tft.fillCircle(156, 150, 22,BLUE);
 
   Tft.fillCircle(48, 140, 8,WHITE);  
   Tft.fillCircle(164,140, 8,WHITE); 
   delay (2000); 
   
   Tft.fillCircle(60, 150, 40,WHITE);  //look fowared
   Tft.fillCircle(176, 150, 40,WHITE);
  
   Tft.fillCircle(60, 150, 22,BLUE); 
   Tft.fillCircle(176, 150, 22,BLUE);
 
   Tft.fillCircle(68, 140, 8,WHITE);  
   Tft.fillCircle(184,140, 8,WHITE); 
   delay (2000); 
       Tft.fillRectangle(0, 0, 400,800,BLACK);
       delay (200);
    Tft.drawHorizontalLine(0,0,400,CYAN);
    Tft.drawHorizontalLine(0,130,400,CYAN);
    Tft.drawString("Sleep Mode",0,140,4,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawString("(Charging Battery)",15,180,2,CYAN);    // draw string: "world!!", (80, 230), size: 4, color: WHITE
    Tft.drawHorizontalLine(0,210,400,CYAN);
    Tft.drawHorizontalLine(0,400,400,CYAN);
    delay (800);
    
    
    
}

void loop()

{

     
}
