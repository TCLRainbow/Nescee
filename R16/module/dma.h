#ifndef R16_DMA_H
#define R16_DMA_H

#include <cstdint>

class DMA_CH {
public:
    uint8_t DMA_EN_REG;
    uint8_t DMA_PAU_REG;
    uint32_t DMA_DESC_ADDR_REG;
    uint32_t DMA_CFG_REG;
    uint32_t DMA_CUR_SRC_REG;
    uint32_t DMA_CUR_DEST_REG;
    uint32_t DMA_BCNT_LEFT_REG;
    uint16_t DMA_PARA_REG;
};

class DMA {
public:
    DMA();
    void init();

    uint32_t DMA_IRQ_EN_REG;
    uint32_t DMA_IRQ_PEND_REG;
    uint8_t DMA_AUTO_GATE_REG;
    uint8_t DMA_STA_REG;
    DMA_CH dma_chs [8];
};


#endif //R16_DMA_H
