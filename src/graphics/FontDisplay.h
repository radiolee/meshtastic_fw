#pragma once
#include <Arduino.h>

#include "OLEDDisplay.h"

namespace graphics
{

    class OLEDDisplayUTF8
    {
        public:
            OLEDDisplayUTF8(OLEDDisplay& d): display(d) {}
            void drawString(int16_t x, int16_t y, const char* utf8);
        private:
            OLEDDisplay& display;
    };

}