#include <platform.h>
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/sensor.h"
#include "drivers/timer_def_stm32f4xx.h"


timerHardware_t timerHardware[] = {
    DEF_TIM(TIM8,  CH4,  PC9,  TIM_USE_OUTPUT_AUTO,   0, 0), // S1 D(2,7,7) UP217
    DEF_TIM(TIM8,  CH3,  PC8,  TIM_USE_OUTPUT_AUTO,   0, 0), // S2 D(2,2,0) UP217
    DEF_TIM(TIM1,  CH3N, PB15, TIM_USE_OUTPUT_AUTO,   0, 0), // S3 D(2,6,0) UP256
    DEF_TIM(TIM1,  CH1,  PA8,  TIM_USE_OUTPUT_AUTO,   0, 1), // S4 D(2,1,6) UP256

    DEF_TIM(TIM2,  CH4,  PB11, TIM_USE_OUTPUT_AUTO,   0, 0), // S5 D(1,7,3) UP173
    DEF_TIM(TIM2,  CH3,  PB10, TIM_USE_OUTPUT_AUTO,   0, 0), // S6 D(1,1,3) UP173

    DEF_TIM(TIM3,  CH4,  PB1,  TIM_USE_OUTPUT_AUTO,    0, 0), // 2812LED  D(1,2,5)

    DEF_TIM(TIM5,  CH3,  PA2,  TIM_USE_ANY,    0, 0), //TX2  softserial1_Tx
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);