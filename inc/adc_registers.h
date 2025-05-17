/*
 * adc_registers.h
 *
 *  Created on: 05 may 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __ADC_REGISTERS_H__
#define __ADC_REGISTERS_H__

#include "types.h"

/*** ADC REGISTERS macros ***/

// Peripheral base address.
#define ADC1                        ((ADC_registers_t*) ((uint32_t) 0x40012400))
// Temperature sensor calibration values.
#define ADC_TS_VCC_CALIB_MV         ((int32_t) 3000)
#define ADC_TS_CAL1_ADDR            ((uint16_t*) ((uint32_t) 0x1FF8007A))
#define ADC_TS_CAL1                 ((int32_t) (*ADC_TS_CAL1_ADDR))
#define ADC_TS_CAL1_TEMP            ((int32_t) 30)
#define ADC_TS_CAL2_ADDR            ((uint16_t*) ((uint32_t) 0x1FF8007E))
#define ADC_TS_CAL2                 ((int32_t) (*ADC_TS_CAL2_ADDR))
#define ADC_TS_CAL2_TEMP            ((int32_t) 130)
// Internal voltage reference calibration values.
#define ADC_VREFINT_VCC_CALIB_MV    ((int32_t) 3000)
#define ADC_VREFINT_CAL_ADDR        ((uint16_t*) ((uint32_t) 0x1FF80078))
#define ADC_VREFINT_CAL             ((int32_t) (*ADC_VREFINT_CAL_ADDR))

/*** ADC REGISTERS structures ***/

/*!******************************************************************
 * \struct ADC_registers_t
 * \brief ADC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISR;
    volatile uint32_t IER;
    volatile uint32_t CR;
    volatile uint32_t CFGR1;
    volatile uint32_t CFGR2;
    volatile uint32_t SMPR;
    volatile uint32_t RESERVED0;
    volatile uint32_t RESERVED1;
    volatile uint32_t TR;
    volatile uint32_t RESERVED2;
    volatile uint32_t CHSELR;
    volatile uint32_t RESERVED3[5];
    volatile uint32_t DR;
    volatile uint32_t RESERVED4[28];
    volatile uint32_t CALFACT;
    volatile uint32_t RESERVED5[148];
    volatile uint32_t CCR;
} ADC_registers_t;

#endif /* __ADC_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
