#ifndef R16_CPUCFG_H
#define R16_CPUCFG_H

#include <cstdint>

class CPUCFG {

public:
    CPUCFG();
    void init();

    uint32_t CPU0_RST_CTRL;
    uint32_t CPU0_CTRL_REG;
    uint32_t CPU0_STATUS;

    uint32_t CPU1_RST_CTRL;
    uint32_t CPU1_CTRL_REG;
    uint32_t CPU1_STATUS;

    uint32_t CPU2_RST_CTRL;
    uint32_t CPU2_CTRL_REG;
    uint32_t CPU2_STATUS;

    uint32_t CPU3_RST_CTRL;
    uint32_t CPU3_CTRL_REG;
    uint32_t CPU3_STATUS;

    uint32_t CPU_SYS_RST_REG;
    uint32_t GENER_CTRL_REG;
    uint32_t EVENT_IN;
    uint32_t SUP_STAN_FLAG_REG;

    uint32_t PRIVATE_REG0;
    uint32_t PRIVATE_REG1;

    uint32_t CNT64_CTRL_REG;
    uint32_t CNT64_LOW_REG;
    uint32_t CNT64_HIGH_REG;
};

#endif //R16_CPUCFG_H
