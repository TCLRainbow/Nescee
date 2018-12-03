#include "cpucfg.h"

CPUCFG::CPUCFG() = default;

void CPUCFG::init() {
    CPU0_RST_CTRL = 0x3;
    CPU0_CTRL_REG = 0x0;
    CPU0_STATUS = 0x0;

    CPU1_RST_CTRL = 0x1;
    CPU1_CTRL_REG = 0x0;
    CPU1_STATUS = 0x0;

    CPU2_RST_CTRL = 0x1;
    CPU2_CTRL_REG = 0x0;
    CPU2_STATUS = 0x0;

    CPU3_RST_CTRL = 0x1;
    CPU3_CTRL_REG = 0x0;
    CPU3_STATUS = 0x0;

    CPU_SYS_RST_REG = 0x1;
    GENER_CTRL_REG = 0x20;
    EVENT_IN = 0x0;
    SUP_STAN_FLAG_REG = 0x0;

    PRIVATE_REG0 = 0x0;
    PRIVATE_REG1 = 0x0;

    CNT64_CTRL_REG = 0x0;
    CNT64_LOW_REG = 0x0;
    CNT64_HIGH_REG = 0x0;
}
