#ifndef SYSTEM_H
#define SYSTEM_H

#include "MOTOR.h"
#include "RGB.h"

struct SYSTEM
{
  char cmd;
  bool isRunning=false;
  motor motorrun;
  RGBled RGBshow;
};

void RUN(SYSTEM &a);
void keycaps(SYSTEM &a);

#endif