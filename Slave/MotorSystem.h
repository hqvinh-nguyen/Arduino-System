#ifndef MOTORSYSTEM_H
#define MOTORSYSTEM_H

#include"Motor.h"
#include<Stepper.h>
#include<Arduino.h>

class MotorManager
{
  private:
    uint8_t _count;
    Motor** _steppers;

  public:
    template <size_t N>
    MotorManager(Motor* (&steppers)[N]) : _steppers(steppers), _count(N) {}

    void MotorRunning()
    {
      for(uint8_t i=0;i<_count;i++)
      {
        _steppers[i]->run();
      }
    }
};

#endif