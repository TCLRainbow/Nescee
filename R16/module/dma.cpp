#include "dma.h"

DMA::DMA() = default;

void DMA::init() {
    DMA_IRQ_EN_REG = 0;
    DMA_IRQ_PEND_REG = 0;
    DMA_AUTO_GATE_REG = 0;
    DMA_STA_REG = 0;
    int i = 0;
    for (i=0; i<8; ++i) {
        dma_chs[i].DMA_EN_REG = 0;
        dma_chs[i].DMA_PAU_REG = 0;
        dma_chs[i].DMA_CFG_REG = 0;
    }
}
