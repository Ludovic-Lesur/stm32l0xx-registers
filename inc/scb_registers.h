/*
 * scb_registers.h
 *
 *  Created on: 05 may 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __SCB_REGISTERS_H__
#define __SCB_REGISTERS_H__

#include "types.h"

/*** SCB REGISTERS macros ***/

// Peripheral base address.
#define SCB     ((SCB_registers_t*) ((uint32_t) 0xE000ED00))

/*** SCB REGISTERS structures ***/

/*!******************************************************************
 * \struct SCB_registers_t
 * \brief SCB registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CPUID;
    volatile uint32_t ICSR;
    volatile uint32_t VTOR;
    volatile uint32_t AIRCR;
    volatile uint32_t SCR;
    volatile uint32_t CCR;
    volatile uint32_t SHPR2;
    volatile uint32_t SHPR3;
} SCB_registers_t;

#endif /* __SCB_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
