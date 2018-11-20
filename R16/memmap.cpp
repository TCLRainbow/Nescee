#include <cstdint>

/// https://linux-sunxi.org/images/c/ca/Allwinner_R16_User_Manual_V1.2.pdf
/// Page 28 - Memory Map
class MemMap
{
    const uint32_t SRAM_A1 = 0x0;
    const uint32_t SRAM_A2 = 0x44000;
    const uint32_t SRAM_Ctrl = 0x1C00000;
    const uint32_t DMA = 0x1C02000;
    const uint32_t NDFC = 0x01C03000;
    const uint32_t LCD = 0x1C0C000;
    const uint32_t VE = 0x1C0E000;
    const uint32_t MMC_0 = 0x1C0F000;
    const uint32_t MMC_1 = 0x1C10000;
    const uint32_t MMC_2 = 0x1C11000;
    const uint32_t CE = 0x1C15000;
    const uint32_t USB_OTG = 0x1C19000;
    const uint32_t USB_HCI = 0x1C1A000;
    const uint32_t CCU = 0x1C2000;
    const uint32_t PIO = 0x1C20800;
    const uint32_t TIMER = 0x1C20C00;
    const uint32_t PWM = 0x1C21400;
    const uint32_t DAUDIO_0 = 0x1C22000;
    const uint32_t DAUDIO_1 = 0x1C22400;
    const uint32_t KEYADC = 0x1C22800;
    const uint32_t AUDIO_CODEC = 0x1C22C00;
    const uint32_t SID = 0x1C23800;
    const uint32_t THERMAL_SENSOR = 0x1C25000;
    const uint32_t UART_0 = 0x1C28000;
    const uint32_t UART_1 = 0x1C28400;
    const uint32_t UART_2 = 0x1C28800;
    const uint32_t UART_3 = 0x1C28C00;
    const uint32_t TWI_0 = 0x1C2AC00;
    const uint32_t TWI_1 = 0x1C2B000;
    const uint32_t TWI_2 = 0x1C2B400;
    const uint32_t GPU = 0x1C40000;
    const uint32_t HSTMR = 0x1C60000;
    const uint32_t DRAMCOM = 0x1C62000;
    const uint32_t DRAMCTL = 0x1C63000;
    const uint32_t DRAMPHY = 0x1C65000;
    const uint32_t SPI0 = 0x1C68000;
    const uint32_t SCU_REG = 0x1C8000;
    const uint32_t MIPI_DSI = 0x1CA0000;
    const uint32_t CSI = 0x1CB0000;
    const uint32_t DEFE = 0x1E00000;
    const uint32_t DEBE = 0x1E60000;
    const uint32_t DRC = 0x1E70000;
    const uint32_t SAT = 0x1E80000;
    const uint32_t RTC = 0x1F00000;
    const uint32_t R_TIMER = 0x1F00800;
    const uint32_t R_INTC = 0x1F00C00;
    const uint32_t R_WDOG = 0x1F01000;
    const uint32_t R_PRCM = 0x1F01400;
    const uint32_t R_CPUCFG = 0x1F01C00;
    const uint32_t R_TWI = 0x1F02400;
    const uint32_t R_UART = 0x1F02800;
    const uint32_t R_PIO = 0x1F02C00;
    const uint32_t R_RSB = 0x1F03400;
    const uint32_t R_PWM = 0x1F03800;
    const uint32_t CoreSight = 0x3F500000;
    const uint32_t TSGEN_RO = 0x3F506000;
    const uint32_t TSGEN_CTRL = 0x3F507000;
    const uint32_t DDR = 0x40000000;
    const uint32_t BROM = 0xFFFF0000;
};