#ifndef R16_LIBRARY_H
#define R16_LIBRARY_H

#include "ccu.h"

class R16
{

public:
    R16();
    CCU ccu;
    void init();
};

#endif