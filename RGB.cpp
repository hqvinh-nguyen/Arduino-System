#include "RGB.h"
#include<Arduino.h>

void setColor(RGBled &a)
{
  analogWrite(a.pinRed, a.RGB.red);
  analogWrite(a.pinGreen, a.RGB.green);
  analogWrite(a.pinBlue, a.RGB.blue);
}

void setStartStopColor(RGBled &a, bool running) 
{
  a.RGB.red = running ? 0 : 10;
  a.RGB.green = running ? 10 : 0;
}

void setDirectionColor(RGBled &a, bool reverse)
{
  a.RGB.blue = reverse ? 10 : 0;
}

