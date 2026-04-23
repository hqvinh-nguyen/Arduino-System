#include"Motor.h"
#include<Stepper.h>
#include <Arduino.h>

Motor::Motor(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4) : _stepper(2048, pin1, pin2, pin3, pin4) {}

void Motor::setRunning()
{
  _motorIsRunning=!_motorIsRunning;
}

void Motor::run()
{
  if (_motorIsRunning)
  {
    _currentTime=millis();
    _stepper.setSpeed(_speed);
    if(_currentTime-_lastStep>=_speed)
    {
      _lastStep=_currentTime;
      _stepper.step(1);
    }
  }
}