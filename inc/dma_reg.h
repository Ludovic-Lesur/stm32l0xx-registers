/*
 * dma_reg.h
 *
 *  Created on: 08 may 2018
 *      Author: Ludo
 */

#ifndef __DMA_REG_H__
#define __DMA_REG_H__

#include "types.h"

/*** DMA REG macros ***/

// Peripheral base address.
#define DMA1	((DMA_registers_t*) ((uint32_t) 0x40020000))

/*** DMA REG structures ***/

/*!******************************************************************
 * \struct DMA_channel_registers_t
 * \brief DMA channel registers map.
 *******************************************************************/
typedef struct {
	volatile uint32_t CCR;		// DMA channel configuration register.
	volatile uint32_t CNDTR;	// DMA channel number of data register.
	volatile uint32_t CPAR;		// DMA channel peripheral address register.
	volatile uint32_t CMAR;    	// DMA channel memory address register.
	volatile uint32_t RESERVED;	// Reserved.
} DMA_channel_registers_t;

/*!******************************************************************
 * \struct DMA_registers_t
 * \brief DMA registers map.
 *******************************************************************/
typedef struct {
	volatile uint32_t ISR;					// DMA interrupt status register.
	volatile uint32_t IFCR;					// DMA interrupt flag clear register.
	volatile DMA_channel_registers_t CH[7];	// DMA channels registers.
	volatile uint32_t RESERVED7[5];			// Reserved 0x94-0xA7.
	volatile uint32_t CSELR;    			// DMA channel selection register.
} DMA_registers_t;

#endif /* __DMA_REG_H__ */
