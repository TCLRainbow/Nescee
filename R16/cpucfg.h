#ifndef R16_CPUCFG_H
#define R16_CPUCFG_H

#include <cstdint>

class CPUCFG {

public:
    CPUCFG();
    void init();

    uint8_t CPU0_RST_CTRL;
    uint8_t CPU0_CTRL_REG;
    uint8_t CPU0_STATUS;

    uint8_t CPU1_RST_CTRL;
    uint8_t CPU1_CTRL_REG;
    uint8_t CPU1_STATUS;

    uint8_t CPU2_RST_CTRL;
    uint8_t CPU2_CTRL_REG;
    uint8_t CPU2_STATUS;

    uint8_t CPU3_RST_CTRL;
    uint8_t CPU3_CTRL_REG;
    uint8_t CPU3_STATUS;

    uint8_t CPU_SYS_RST_REG;
    uint16_t GENER_CTRL_REG;
    uint8_t EVENT_IN;
    uint16_t SUP_STAN_FLAG_REG;

    uint32_t PRIVATE_REG0;
    uint32_t PRIVATE_REG1;

    uint8_t CNT64_CTRL_REG;
    uint32_t CNT64_LOW_REG;
    uint32_t CNT64_HIGH_REG;
};

#endif //R16_CPUCFG_H
