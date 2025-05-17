/*
 * syscfg_registers.h
 *
 *  Created on: 18 jun. 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __SYSCFG_REGISTERS_H__
#define __SYSCFG_REGISTERS_H__

#include "types.h"

/*** SYSCFG REGISTERS macros ***/

// Peripheral base address.
#define SYSCFG  ((SYSCFG_registers_t*) ((uint32_t) 0x40010000))

/*** SYSCFG REGISTERS structures ***/

/*!******************************************************************
 * \struct SYSCFG_registers_t
 * \brief SYSCFG registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CFGR1;
    volatile uint32_t CFGR2;
    volatile uint32_t EXTICR[4];
    volatile uint32_t COMP1_CSR;
    volatile uint32_t COMP2_CSR;
    volatile uint32_t CFGR3;
} SYSCFG_registers_t;

#endif /* __SYSCFG_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
