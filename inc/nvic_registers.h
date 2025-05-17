/*
 * nvic_registers.h
 *
 *  Created on: 28 apr. 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __NVIC_REGISTERS_H__
#define __NVIC_REGISTERS_H__

#include "types.h"

/*** NVIC REGISTERS macros ***/

// Peripheral base address.
#define NVIC    ((NVIC_registers_t*) ((uint32_t) 0xE000E100))

/*** NVIC REGISTERS structures ***/

/*!******************************************************************
 * \struct NVIC_registers_t
 * \brief NVIC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISER;
    volatile uint32_t RESERVED0[31];
    volatile uint32_t ICER;
    volatile uint32_t RESERVED1[31];
    volatile uint32_t ISPR;
    volatile uint32_t RESERVED2[31];
    volatile uint32_t ICPR;
    volatile uint32_t RESERVED3[95];
    volatile uint32_t IPR[8];
} NVIC_registers_t;

#endif /* __NVIC_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
