#include "allwinner_r16.h"

R16::R16() = default;

void R16::init() {
    ccu.init();
    cpucfg.init();
}
