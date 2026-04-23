#ifndef MOTOR_H
#define MOTOR_H

#include<Stepper.h>
#include<Arduino.h>

class Motor
{
  private:
    unsigned long _lastStep = 0;
    unsigned long _currentTime;
    bool _motorIsRunning=false;
    bool _motorReverse=false;
    uint8_t _speed=12;
    Stepper _stepper;
  public:
    Motor(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4);

    void run();
    void setRunning();
};

#endif