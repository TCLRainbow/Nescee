#ifndef R16_AUDIO_CODEC_H
#define R16_AUDIO_CODEC_H

#include <cstdint>

class AUDIO_CODEC {
public:
    AUDIO_CODEC();
    void init();

    uint16_t DA_CTL;
    uint8_t DA_FAT0;
    uint16_t DA_FAT1;
    uint32_t DA_TXFIFO;
    uint32_t DA_RXFIFO;
    uint32_t DA_FCTL;
    uint32_t DA_FSTA;
    uint8_t DA_INT;
    uint8_t DA_ISTA;
    uint8_t DA_CLKD;
    uint32_t DA_TXCNT;
    uint32_t DA_RXCNT;
    uint8_t DA_TXCHSEL;
    uint16_t DA_TXCHMAP;
    uint8_t DA_RXCHSEL;
    uint16_t DA_RXCHMAP;
    uint16_t CHIP_AUDIO_RST;
    uint16_t SYSCLK_CTL;
    uint32_t MOD_CLK_ENA;
    uint32_t MOD_RST_CTL;
    uint16_t SYS_SR_CTRL;
    uint8_t SYS_SRC_CLK;
    uint16_t AIF1CLK_CTRL;
    uint16_t AIF1_ADCDAT_CTRL;
    uint16_t AIF1_DACDAT_CTRL;
    uint16_t AIF1_MXR_SRC;
    uint16_t AIF1_VOL_CTRL1;
    uint16_t AIF1_VOL_CTRL2;
};

#endif //R16_AUDIO_CODEC_H
