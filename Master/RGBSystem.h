#ifndef RGB_MANAGER_H
#define RGB_MANAGER_H

#include "RGB.h"

class RGBManager {
  private:
    RGB** _leds;    
    uint8_t _count;

  public:
    template <size_t N>
    RGBManager(RGB* (&leds)[N]) : _leds(leds), _count(N) {}

    void beginAll() {
        for (uint8_t i = 0; i < _count; i++) {
            _leds[i]->begin();
        }
    }

    void setAll(uint8_t r, uint8_t g, uint8_t b) {
        for (uint8_t i = 0; i < _count; i++) {
            _leds[i]->setColor(r, g, b);
        }
    }
};

#endif
