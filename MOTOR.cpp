#include "MOTOR.h"
#include <Stepper.h>

void runMotor(motor &a)
{
  Stepper myStepper(2048, a.a1, a.a2, a.a3, a.a4);
  myStepper.setSpeed(a.speed.currentSpeed);
  myStepper.step(a.speed.reverse?-10:10);
}