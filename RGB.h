#ifndef RGB_H
#define RGB_H

struct color
{
  int red=0;
  int green=0;
  int blue=0;
};
struct RGBled
{
  int pinRed;
  int pinGreen;
  int pinBlue;
  color RGB;
};

void setColor(RGBled &a);
void setStartStopColor(RGBled &a, bool running); 
void setDirectionColor(RGBled &a, bool reverse);

#endif