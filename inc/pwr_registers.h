/*
 * pwr_registers.h
 *
 *  Created on: 05 may 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __PWR_REGISTERS_H__
#define __PWR_REGISTERS_H__

#include "types.h"

/*** PWR REGISTERS macros ***/

// Peripheral base address.
#define PWR     ((PWR_registers_t*) ((uint32_t) 0x40007000))

/*** PWR REGISTERS structures ***/

/*!******************************************************************
 * \struct PWR_registers_t
 * \brief PWR registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR;
    volatile uint32_t CSR;
} PWR_registers_t;

#endif /* __PWR_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
