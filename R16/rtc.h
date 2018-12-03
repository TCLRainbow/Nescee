#ifndef R16_RTC_H
#define R16_RTC_H

#include <cstdint>

class RTC {
public:
    RTC();
    void init();

    uint32_t LOSC_CTRL_REG;
    uint8_t LOSC_AUTO_SWT_STA_REG;
    uint8_t INTOSC_CLK_PRESCAL_REG;
    uint32_t RTC_YY_MM_DD_REG;
    uint32_t RTC_HH_MM_SS_REG;

    uint32_t ALARM0_COUNTER_REG;
    uint32_t ALARM0_CUR_VLU_REG;
    uint8_t ALARM0_ENABLE_REG;
    uint8_t ALARM0_IRQ_EN;
    uint8_t ALARM0_IRQ_STA_REG;

    uint32_t ALARM1_WK_HH_MM_SS;
    uint8_t ALARM1_EN_ENG;
    uint8_t ALARM1_IRQ_EN;
    uint8_t ALARM1_IRQ_STA_REG;

    uint8_t ALARM_CONFIG_REG;
    uint8_t LOSC_OUT_GATING_REG;
    uint32_t GP_DATA_REG;
    uint16_t GPL_HOLD_OUTPUT_REG;
    uint8_t VDD_RTC_REG;
    uint32_t IC_CHARA_REG;
};

#endif //R16_RTC_H
