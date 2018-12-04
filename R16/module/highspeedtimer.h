#ifndef R16_HIGHSPEEDTIMER_H
#define R16_HIGHSPEEDTIMER_H

#include <cstdint>

class HighSpeedTimer {
public:
    HighSpeedTimer();
    void init();

    uint8_t HS_TMR_IRQ_EN_REG;
    uint8_t HS_TMR_IRQ_STAT_REG;

    uint32_t HS_TMR0_CTRL_REG;

    uint32_t HS_TMR_INTV_LO_REG;
    uint32_t HS_TMR_INTV_HI_REG;
    uint32_t HS_TMR_CURNT_LO_REG;
    uint32_t HS_TMR_CURNT_HI_REG;

};

#endif //R16_HIGHSPEEDTIMER_H
