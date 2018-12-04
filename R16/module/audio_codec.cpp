#include "audio_codec.h"

AUDIO_CODEC::AUDIO_CODEC() = default;

void AUDIO_CODEC::init() {
    DA_CTL = 0;
    DA_FAT0 = 0xC;
    DA_FAT1 = 0x4020;
    DA_TXFIFO = 0;
    DA_RXFIFO = 0;
    DA_FCTL = 0x400F0;
    DA_FSTA = 0x10800000;
    DA_INT = 0;
    DA_ISTA = 0x10;
    DA_CLKD = 0;
    DA_TXCNT = 0;
    DA_RXCNT = 0;
    DA_TXCHSEL = 1;
    DA_TXCHMAP = 0x3210; // Default init valueL 0x76543210
    DA_RXCHSEL = 1;
    DA_RXCHMAP = 0x3210;
    CHIP_AUDIO_RST = 0x101;
    SYSCLK_CTL = 0;
    MOD_CLK_ENA = 0;
    MOD_RST_CTL = 0;
    SYS_SR_CTRL = 0;
    SYS_SRC_CLK = 0;
    AIF1CLK_CTRL = 0;
    AIF1_ADCDAT_CTRL = 0;
    AIF1_DACDAT_CTRL = 0;
    AIF1_MXR_SRC = 0;
    AIF1_VOL_CTRL1 = 0xA0A0;
    AIF1_VOL_CTRL2 = 0xA0A0;
}
