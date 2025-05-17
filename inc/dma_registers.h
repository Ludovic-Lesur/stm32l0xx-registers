/*
 * dma_registers.h
 *
 *  Created on: 08 may 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __DMA_REGISTERS_H__
#define __DMA_REGISTERS_H__

#include "types.h"

/*** DMA REGISTERS macros ***/

// Peripheral base address.
#define DMA1    ((DMA_registers_t*) ((uint32_t) 0x40020000))

/*** DMA REGISTERS structures ***/

/*!******************************************************************
 * \struct DMA_channel_registers_t
 * \brief DMA channel registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CCR;
    volatile uint32_t CNDTR;
    volatile uint32_t CPAR;
    volatile uint32_t CMAR;
    volatile uint32_t RESERVED;
} DMA_channel_registers_t;

/*!******************************************************************
 * \struct DMA_registers_t
 * \brief DMA registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISR;
    volatile uint32_t IFCR;
    volatile DMA_channel_registers_t CHx[7];
    volatile uint32_t RESERVED7[5];
    volatile uint32_t CSELR;
} DMA_registers_t;

#endif /* __DMA_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
