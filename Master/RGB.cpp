#include "RGB.h"
#include<Arduino.h>

RGB::RGB(uint8_t r, uint8_t g, uint8_t b) : _rPin(r), _gPin(g), _bPin(b) {}

void RGB::begin()
{
    pinMode(_rPin, OUTPUT);
    pinMode(_gPin, OUTPUT);
    pinMode(_bPin, OUTPUT);
    turnOff();
}

void RGB::setColor(uint8_t r, uint8_t g, uint8_t b)
{
    analogWrite(_rPin, r);
    analogWrite(_gPin, g);
    analogWrite(_bPin, b);
}

void RGB::turnOff() 
{
    setColor(0, 0, 0);
}
