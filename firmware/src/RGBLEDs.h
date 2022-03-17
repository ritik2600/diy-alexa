// RGBLEDs.h

#pragma once
#include <stdint.h>

typedef enum {
    RED,
    GREEN,
    BLUE
} colours_t;

/** Control state for an LED array, e.g. Adafruit DotStar Matrix Featherwing. */
class RGBLEDs {
public:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t brightness;
    RGBLEDs();
    void more(colours_t c, bool lots = false);
    void less(colours_t c, bool lots = false);
};

extern RGBLEDs rgbleds;
