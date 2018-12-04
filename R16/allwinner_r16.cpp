#include "allwinner_r16.h"

R16::R16() = default;

void R16::init() {
    ccu.init();
    cpucfg.init();
    timer.init();
    pwm.init();
    dma.init();
    rtc.init();
    sram.init();
    audio.init();
}
