/*
 * usart_reg.h
 *
 *  Created on: 11 aug. 2018
 *      Author: Ludo
 */

#ifndef __USART_REG_H__
#define __USART_REG_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** USART REG macros ***/

// Peripherals base address.
#define USART2  ((USART_registers_t*) ((uint32_t) 0x40004400))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define USART1  ((USART_registers_t*) ((uint32_t) 0x40013800))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define USART4  ((USART_registers_t*) ((uint32_t) 0x40004C00))
#define USART5  ((USART_registers_t*) ((uint32_t) 0x40005000))
#endif

/*** USART REG structures ***/

/*!******************************************************************
 * \struct USART_registers_t
 * \brief USART registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;      // USART control register 1.
    volatile uint32_t CR2;      // USART control register 2.
    volatile uint32_t CR3;      // USART control register 3.
    volatile uint32_t BRR;      // USART baud rate register.
    volatile uint32_t GTPR;     // USART guard time and prescaler register.
    volatile uint32_t RTOR;     // USART receiver timeout register.
    volatile uint32_t RQR;      // USART request register.
    volatile uint32_t ISR;      // USART interrupt and status register.
    volatile uint32_t ICR;      // USART interrupt flag clear register.
    volatile uint32_t RDR;      // USART receive data register.
    volatile uint32_t TDR;      // USART transmit data register.
} USART_registers_t;

#endif /* __USART_REG_H__ */
