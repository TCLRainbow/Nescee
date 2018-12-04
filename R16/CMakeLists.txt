cmake_minimum_required(VERSION 3.12)
project(R16)

set(CMAKE_CXX_STANDARD 17)

add_library(R16 allwinner_r16.cpp allwinner_r16.h module/ccu.cpp module/ccu.h module/cpucfg.cpp module/cpucfg.h module/timer.cpp module/timer.h module/pwm.cpp module/pwm.h module/highspeedtimer.cpp module/highspeedtimer.h module/dma.cpp module/dma.h module/rtc.cpp module/rtc.h module/sram.cpp module/sram.h module/audio_codec.cpp module/audio_codec.h)