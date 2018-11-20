#ifndef R16_CCU_H
#define R16_CCU_H

#include <cstdint>

class CCU {
public:
    CCU();
    void init();

    uint32_t PPL_CPUX_CTRL_REG;
};
#endif //R16_CCU_H
