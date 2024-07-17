/*
 * lptim_reg.h
 *
 *  Created on: 29 apr. 2018
 *      Author: Ludo
 */

#ifndef __LPTIM_REG_H__
#define __LPTIM_REG_H__

#include "types.h"

/*** LPTIM REG macros ***/

// Peripheral base address.
#define LPTIM1	((LPTIM_registers_t*) ((uint32_t) 0x40007C00))

/*** LPTIM REG structures ***/

/*!******************************************************************
 * \enum LPTIM_registers_t
 * \brief LPTIM registers map.
 *******************************************************************/
typedef struct {
	volatile uint32_t ISR;    	// LPTIM interrupt and status register.
	volatile uint32_t ICR;   	// LPTIM interrupt clear register.
	volatile uint32_t IER;  	// LPTIM interrupt enable register.
	volatile uint32_t CFGR;    	// LPTIM configuration register.
	volatile uint32_t CR;      	// LPTIM control register.
	volatile uint32_t CMP;      // LPTIM compare register.
	volatile uint32_t ARR;    	// LPTIM autoreload register.
	volatile uint32_t CNT;     	// LPTIM counter register.
} LPTIM_registers_t;

#endif /* __LPTIM_REG_H__ */
