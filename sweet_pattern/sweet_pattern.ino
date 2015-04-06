//No copyright whatsoever

//Author: Niral Fernando  
//Email: niral.fernando@mgail.com
//MCP23017.h library is available in https://github.com/kasperskaarhoj/MCP23017-Arduino-Library/blob/master/MCP23017.h

#include <Wire.h>
#include <MCP23017.h>


MCP23017 GPIOchip; 
int pins[17] = {-1,11,9,1,2,8,4,10,13,15,3,5,12,0,14,6,7};

int rows[8] = {pins[13], pins[3], pins[4], pins[10], pins[6], pins[11], pins[15], pins[16]};
int cols[8] = {pins[5], pins[2], pins[7], pins[1], pins[12], pins[8], pins[14], pins[9]};

void setup()
{

  Wire.begin();           // Wire must be started!
  GPIOchip.begin(B0100010);  // Address set to zero.
  GPIOchip.init();
  for (int i = 1; i <= 16; i++) 
  {
    GPIOchip.pinMode(pins[i - 1], OUTPUT);
    
    for (int i = 1; i <= 8; i++) 
    {
      GPIOchip.digitalWrite(cols[i - 1], LOW);
    }

    for (int i = 1; i <= 8; i++) 
    {
      GPIOchip.digitalWrite(rows[i - 1], LOW);
    } 
  }
}

void loop()
{
  for (int a=0; a<8; a++)
  {
    GPIOchip.digitalWrite(rows[a],HIGH);
    GPIOchip.digitalWrite(cols[a],HIGH);
    delay(800);
 
     for (int i = 1; i <= 8; i++) 
     {
       GPIOchip.digitalWrite(rows[i - 1], LOW);
       GPIOchip.digitalWrite(cols[a],LOW);
     }
  }
} 

/*
SIMPLE USE OF THE MCP23017.h library:

    GPIOchip.digitalWrite(7, HIGH);
    GPIOchip.digitalWrite(0,HIGH);
    GPIOchip.digitalWrite(5,HIGH);
    GPIOchip.digitalWrite(1,HIGH);
    GPIOchip.digitalWrite(15,HIGH);
    GPIOchip.digitalWrite(13,HIGH);
    
 delay(1000); 
 GPIOchip.digitalWrite(7, LOW);
    GPIOchip.digitalWrite(0,LOW);
    GPIOchip.digitalWrite(5,LOW);
    GPIOchip.digitalWrite(1,LOW);
    GPIOchip.digitalWrite(15,LOW);
    GPIOchip.digitalWrite(13,LOW);
    
GPIOchip.digitalWrite(3, HIGH);
    GPIOchip.digitalWrite(1,HIGH);
    GPIOchip.digitalWrite(6,HIGH);
    GPIOchip.digitalWrite(2,HIGH);
    GPIOchip.digitalWrite(14,HIGH);
    GPIOchip.digitalWrite(12,HIGH);

delay(1000);
GPIOchip.digitalWrite(3, LOW);
    GPIOchip.digitalWrite(1,LOW);
    GPIOchip.digitalWrite(6,LOW);
    GPIOchip.digitalWrite(2,LOW);
    GPIOchip.digitalWrite(14,LOW);
    GPIOchip.digitalWrite(12,LOW); 
*/



