#include "System.h"
#include "MOTOR.h"
#include "RGB.h"
#include <Stepper.h>

SYSTEM a;

void setup()
{
  Serial.begin(9600);

  a.motorrun.a1 = 5;
  a.motorrun.a2 = 7;
  a.motorrun.a3 = 6;
  a.motorrun.a4 = 8;

  a.RGBshow.pinRed = 11;
  a.RGBshow.pinGreen = 10;
  a.RGBshow.pinBlue = 9;
}

void loop()
{
  RUN(a);
}
