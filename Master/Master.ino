#include <Wire.h>
#include "RGB.h"

#define SLAVE_ADDR 8

volatile char lastCommand = '0';
RGB MasterRGB(11, 10, 9);

void setup()
{
  Wire.begin();
  MasterRGB.begin();
  Serial.begin(115200);
}
void loop()
{
  Wire.beginTransmission(SLAVE_ADDR);
  while (Serial.available())
  {
    char cmd = Serial.read();
    if (cmd=='1')
      Wire.write('1');
    if (cmd=='2')
      Wire.write('2');
     if (cmd=='3')
      Wire.write('3');
     if (cmd=='4')
      Wire.write('4');
    Wire.endTransmission();
    Wire.requestFrom(SLAVE_ADDR, 20);
  
    if (Wire.available())
    {
      lastCommand = Wire.read();
      if (lastCommand == '1')
      {
        MasterRGB.setColor(128, 0, 128);
        Serial.print(lastCommand);
      }
      else if (lastCommand == '2')
      {
          MasterRGB.setColor(0, 10, 10);
          Serial.print(lastCommand);
      }
      else
      {
        MasterRGB.setColor(10, 0, 0);
        Serial.print('X');
      }
      Serial.println();
    }
  }
}