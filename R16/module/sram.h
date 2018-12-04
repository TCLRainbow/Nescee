#ifndef R16_SRAM_H
#define R16_SRAM_H

#include <cstdint>

class SRAM {
public:
    SRAM();
    void init();

    uint32_t SRAM_CTRL_REG0;
    uint8_t SRAM_CTRL_REG1;
};

#endif //R16_SRAM_H
