/*
 * usart_registers.h
 *
 *  Created on: 11 aug. 2018
 *      Author: Ludo
 */

#ifndef __USART_REGISTERS_H__
#define __USART_REGISTERS_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** USART REGISTERS macros ***/

// Peripherals base address.
#define USART2  ((USART_registers_t*) ((uint32_t) 0x40004400))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define USART1  ((USART_registers_t*) ((uint32_t) 0x40013800))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define USART4  ((USART_registers_t*) ((uint32_t) 0x40004C00))
#define USART5  ((USART_registers_t*) ((uint32_t) 0x40005000))
#endif

/*** USART REGISTERS structures ***/

/*!******************************************************************
 * \struct USART_registers_t
 * \brief USART registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t CR3;
    volatile uint32_t BRR;
    volatile uint32_t GTPR;
    volatile uint32_t RTOR;
    volatile uint32_t RQR;
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t RDR;
    volatile uint32_t TDR;
} USART_registers_t;

#endif /* __USART_REGISTERS_H__ */
