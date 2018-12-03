cmake_minimum_required(VERSION 3.12)
project(R16)

set(CMAKE_CXX_STANDARD 17)

add_library(R16 allwinner_r16.cpp allwinner_r16.h ccu.cpp ccu.h cpucfg.cpp cpucfg.h timer.cpp timer.h pwm.cpp pwm.h highspeedtimer.cpp highspeedtimer.h dma.cpp dma.h rtc.cpp rtc.h)