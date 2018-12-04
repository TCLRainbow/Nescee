#ifndef R16_PWM_H
#define R16_PWM_H

#include <cstdint>

class PWM {
public:
    PWM();
    void init();

    uint32_t PWM_CTRL_REG;
    uint32_t PWM_CH0_PERIOD;
    uint32_t PWM_CH1_PERIOD
};

#endif //R16_PWM_H
