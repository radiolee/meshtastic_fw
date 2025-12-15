#if 1 //HAS_SCREEN

#include "OLEDDisplayUTF8.h"

static uint32_t utf8Next(const char*& p) {
    uint8_t c = *p++;

    if (c < 0x80) return c;
    if ((c & 0xE0) == 0xC0) {
        uint32_t r = (c & 0x1F) << 6;
        r |= (*p++ & 0x3F);
        return r;
    }
    if ((c & 0xF0) == 0xE0) {
        uint32_t r = (c & 0x0F) << 12;
        r |= (*p++ & 0x3F) << 6;
        r |= (*p++ & 0x3F);
        return r;
    }
    return '?';
}


void OLEDDisplayUTF8::drawString(int16_t x, int16_t y, const char* s){
    const char* p = s;
    while (*p) 
    {
        uint32_t code = utf8Next(p);
        // // 此时 p 已经被推进到下一个字符起始位置
        // handleCodepoint(code);
        if(code < 128) 
        {
            display.drawString
        }
        else
        {

        }
    }

}

#endif