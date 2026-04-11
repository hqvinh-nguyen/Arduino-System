#include<Arduino.h>
#include<Stepper.h>

#include "System.h"
#include "MOTOR.h"
#include "RGB.h"

void keyCaps(SYSTEM &a)
{
  switch (a.cmd)
  {
    case 's':
    {
      a.isRunning=!a.isRunning;
      break;
    }
    case 'r':
    {
      a.motorrun.speed.reverse=!a.motorrun.speed.reverse;
      break;
    }
    case 'w':
    {
      a.motorrun.speed.currentSpeed+=4;
      if (a.motorrun.speed.currentSpeed>16)
        a.motorrun.speed.currentSpeed=4;
      break;
    }
  }
}

void RUN(SYSTEM &a)
{
  if (Serial.available()>0)
  {
    a.cmd=Serial.read();
    keyCaps(a);
  }
  if (a.isRunning)
  {
    runMotor(a.motorrun);
  }
  setStartStopColor(a.RGBshow, a.isRunning);
  setDirectionColor(a.RGBshow, a.motorrun.speed.reverse);
  colorScale(a.RGBshow, a.motorrun.speed.currentSpeed, a.isRunning);
  setColor(a.RGBshow);
}