#include "rtc.h"

RTC::RTC() = default;

void RTC::init() {
    LOSC_CTRL_REG = 0x4000;
    LOSC_AUTO_SWT_STA_REG = 0;
    INTOSC_CLK_PRESCAL_REG = 0x14;
    ALARM0_COUNTER_REG = 0;
    ALARM0_ENABLE_REG = 0;
    ALARM0_IRQ_EN = 0;
    ALARM0_IRQ_STA_REG = 0;
    ALARM1_WK_HH_MM_SS = 0;
    ALARM1_EN_ENG = 0;
    ALARM1_IRQ_EN = 0;
    ALARM1_IRQ_STA_REG = 0;
    ALARM_CONFIG_REG = 0;
    LOSC_OUT_GATING_REG = 0;
    GP_DATA_REG = 0;
    GPL_HOLD_OUTPUT_REG = 0;
    VDD_RTC_REG = 0x4;
    IC_CHARA_REG = 0;
}
