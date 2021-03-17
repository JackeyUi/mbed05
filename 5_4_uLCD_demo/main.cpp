// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.background_color(WHITE);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.background_color(WHITE);
    uLCD.printf("\n108061102\n"); //Default Green on black text
   //uLCD.printf("\n  Starting Demo...");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    uLCD.background_color(WHITE);
    //uLCD.printf("%2d",30)
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(500ms);
    }
}