#include "pwm.h"

PWM::PWM() = default;

void PWM::init() {
    PWM_CTRL_REG = 0;
}
