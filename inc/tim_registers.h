/*
 * tim_registers.h
 *
 *  Created on: 03 may 2018
 *      Author: Ludo
 */

#ifndef __TIM_REGISTERS_H__
#define __TIM_REGISTERS_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** TIM REGISTERS macros ***/

// Peripherals base address.
#define TIM2    ((TIM_registers_t*) ((uint32_t) 0x40000000))
#define TIM21   ((TIM_registers_t*) ((uint32_t) 0x40010800))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 2) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define TIM22   ((TIM_registers_t*) ((uint32_t) 0x40011400))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define TIM6    ((TIM_registers_t*) ((uint32_t) 0x40001000))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define TIM3    ((TIM_registers_t*) ((uint32_t) 0x40000400))
#define TIM7    ((TIM_registers_t*) ((uint32_t) 0x40001400))
#endif

/*** TIM REGISTERS structures ***/

/*!******************************************************************
 * \struct TIM_registers_t
 * \brief TIM registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t SMCR;
    volatile uint32_t DIER;
    volatile uint32_t SR;
    volatile uint32_t EGR;
    union {
        struct {
            volatile uint32_t CCMR1;
            volatile uint32_t CCMR2;
        };
        volatile uint32_t CCMRx[2];
    };
    volatile uint32_t CCER;
    volatile uint32_t CNT;
    volatile uint32_t PSC;
    volatile uint32_t ARR;
    volatile uint32_t RESERVED0;
    union {
        struct {
            volatile uint32_t CCR1;
            volatile uint32_t CCR2;
            volatile uint32_t CCR3;
            volatile uint32_t CCR4;
        };
        volatile uint32_t CCRx[4];
    };
    volatile uint32_t RESERVED1;
    volatile uint32_t DCR;
    volatile uint32_t DMAR;
    volatile uint32_t OR;
} TIM_registers_t;

#endif /* __TIM_REGISTERS_H__ */
