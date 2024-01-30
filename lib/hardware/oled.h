#ifndef OLED_H
#define OLED_H

#include "../../include/pinmap.h"

enum eConfig
{
    OLED_MODEL,
    OLED_SDA_GPIO,
    OLED_SCL_GPIO,
    OLED_RESET_GPIO
};

class OledManager
{
public:
    OledManager();
    void setup();

private:

};

extern OledManager fnOledManager;
#endif // guard
