#include "ccu.h"

CCU::CCU() = default;

void CCU::init() {
    PPL_CPUX_CTRL_REG = 0x200;
}
