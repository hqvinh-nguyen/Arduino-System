#ifndef MOTOR_H
#define MOTOR_H
#include <Stepper.h>

struct motorSpeed
{
  int currentSpeed=4;
  int maxSpeed=17;
  int minSpeed=0;
  bool reverse=false;
};

struct motor
{
  int a1;
  int a2;
  int a3;
  int a4;
  motorSpeed speed;
};

void runMotor(motor &a);

#endif