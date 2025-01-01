/*
 * lptim_registers.h
 *
 *  Created on: 29 apr. 2018
 *      Author: Ludo
 */

#ifndef __LPTIM_REGISTERS_H__
#define __LPTIM_REGISTERS_H__

#include "types.h"

/*** LPTIM REGISTERS macros ***/

// Peripheral base address.
#define LPTIM1  ((LPTIM_registers_t*) ((uint32_t) 0x40007C00))

/*** LPTIM REGISTERS structures ***/

/*!******************************************************************
 * \struct LPTIM_registers_t
 * \brief LPTIM registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t IER;
    volatile uint32_t CFGR;
    volatile uint32_t CR;
    volatile uint32_t CMP;
    volatile uint32_t ARR;
    volatile uint32_t CNT;
} LPTIM_registers_t;

#endif /* __LPTIM_REGISTERS_H__ */
