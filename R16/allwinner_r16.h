#ifndef R16_LIBRARY_H
#define R16_LIBRARY_H

#include "module/ccu.h"
#include "module/cpucfg.h"
#include "module/timer.h"
#include "module/pwm.h"
#include "module/dma.h"
#include "module/rtc.h"
#include "module/sram.h"
#include "module/audio_codec.h"

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
    SRAM sram;
    AUDIO_CODEC audio;

    void init();
};

#endif