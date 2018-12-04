#include "sram.h"

SRAM::SRAM() = default;

void SRAM::init() {
    SRAM_CTRL_REG0 = 0x7FFFFFFF;
    SRAM_CTRL_REG1 = 0; // The init value may be 0x1300 , from PDF P. 152
}
