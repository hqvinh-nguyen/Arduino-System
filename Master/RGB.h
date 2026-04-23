#ifndef RGB_H
#define RGB_H

#include <Arduino.h>

class RGB
{
  private:
    uint8_t _rPin, _gPin, _bPin;

  public:
    RGB(uint8_t r, uint8_t g, uint8_t b);
    void begin();
    void setColor(uint8_t r, uint8_t g, uint8_t b);
    void turnOff();
};

#endif
