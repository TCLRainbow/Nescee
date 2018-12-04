#include "highspeedtimer.h"

HighSpeedTimer::HighSpeedTimer() = default;

void HighSpeedTimer::init() {
    HS_TMR_IRQ_EN_REG = 0;
    HS_TMR_IRQ_STAT_REG = 0;

    HS_TMR0_CTRL_REG = 0;


}
