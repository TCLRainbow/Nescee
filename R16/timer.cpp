#include "timer.h"

Timer::Timer() = default;

void Timer::init() {
    TMR_IRQ_EN_REG = 0x0;
    TMR_IRQ_STA_REG = 0x0;

    TMR0_CTRL_REG = 0x4;
    TMR1_CTRL_REG = 0x4;

    AVS_CNT_CTL_REG = 0x0;
    AVS_CNT0_REG = 0x0;
    AVS_CNT1_REG = 0x0;
    AVS_CNT_DIV_REG = 0x5DB05DB;

    WDOG0_IRQ_EN_REG = 0;
    WDOG0_IRQ_STA_REG = 0;
    WDOG0_CTRL_REG = 0;
    WDOG0_CFG_REG = 0;
    WDOG0_MODE_REG = 0;
}
