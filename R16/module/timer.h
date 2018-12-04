#ifndef R16_TIMER_H
#define R16_TIMER_H

#include <cstdint>

class Timer {
public:
    Timer();
    void init();

    uint8_t TMR_IRQ_EN_REG;
    uint8_t TMR_IRQ_STA_REG;

    uint8_t TMR0_CTRL_REG;
    uint32_t TMR0_INTV_VALUE_REG;
    uint32_t TMR0_CUR_VALUE_REG;

    uint8_t TMR1_CTRL_REG;
    uint32_t TMR1_INTV_VALUE_REG;
    uint32_t TMR1_CUR_VALUE_REG;

    uint16_t AVS_CNT_CTL_REG;
    uint32_t AVS_CNT0_REG;
    uint32_t AVS_CNT1_REG;
    uint32_t AVS_CNT_DIV_REG;

    uint8_t WDOG0_IRQ_EN_REG;
    uint8_t WDOG0_IRQ_STA_REG;
    uint16_t WDOG0_CTRL_REG;
    uint8_t WDOG0_CFG_REG;
    uint8_t WDOG0_MODE_REG;
};

#endif //R16_TIMER_H
