#ifndef R16_LIBRARY_H
#define R16_LIBRARY_H

#include "ccu.h"
#include "cpucfg.h"
#include "timer.h"
#include "pwm.h"
#include "dma.h"
#include "rtc.h"

class R16
{

public:
    R16();
    CCU ccu;
    CPUCFG cpucfg;
    Timer timer;
    PWM pwm;
    DMA dma;
    RTC rtc;

    void init();
};

#endif