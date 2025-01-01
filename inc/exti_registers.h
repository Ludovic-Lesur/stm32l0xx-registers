/*
 * exti_registers.h
 *
 *  Created on: 18 jun. 2018
 *      Author: Ludo
 */

#ifndef __EXTI_REGISTERS_H__
#define __EXTI_REGISTERS_H__

#include "types.h"

/*** EXTI REGISTERS macros ***/

// Peripheral base address.
#define EXTI    ((EXTI_registers_t*) ((uint32_t) 0x40010400))

/*** EXTI REGISTERS structures ***/

/*!******************************************************************
 * \struct EXTI_registers_t
 * \brief EXTI registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t IMR;
    volatile uint32_t EMR;
    volatile uint32_t RTSR;
    volatile uint32_t FTSR;
    volatile uint32_t SWIER;
    volatile uint32_t PR;
} EXTI_registers_t;

#endif /* __EXTI_REGISTERS_H__ */
