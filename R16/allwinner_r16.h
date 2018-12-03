#ifndef R16_LIBRARY_H
#define R16_LIBRARY_H

#include "ccu.h"
#include "cpucfg.h"

class R16
{

public:
    R16();
    CCU ccu;
    CPUCFG cpucfg;
    void init();
};

#endif