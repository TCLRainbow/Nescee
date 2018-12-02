#include "ccu.h"

CCU::CCU() = default;

void CCU::init() {
    PPL_CPUX_CTRL_REG = 0x1000;
    PPL_AUDIO_CTRL_REG = 0x35514;
}
