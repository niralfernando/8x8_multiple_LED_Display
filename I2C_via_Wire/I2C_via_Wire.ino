//No copyright whatsoever

//Author: Niral Fernando  
//Email: niral.fernando@gmail.com

#include <Wire.h>

byte pins[2] = { 64, 64};


void setup()
{
  Wire.begin();

  Wire.beginTransmission(B0100000);
  Wire.write(0x00); // IODIRA register
  Wire.write(0x00); // set all of bank A to outputs
  Wire.endTransmission();

  Wire.beginTransmission(B0100000);
  Wire.write(0x01); // IODIRB register
  Wire.write(0x00); // set all of bank B to outputs
  Wire.endTransmission();
}

void loop()
{
  //BANK A
  Wire.beginTransmission(B0100000);

  Wire.write(0x12); // address bank A
  Wire.write(pins[0]); //64 is 0100 0000  // value to send

  Wire.endTransmission();


  //BANK B
  Wire.beginTransmission(B0100000);

  Wire.write(0x13); // address bank B
  Wire.write(pins[1]); ////64 is 0100 0000 // value to send

  Wire.endTransmission();
}

