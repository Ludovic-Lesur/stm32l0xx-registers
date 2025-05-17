/*
 * rcc_registers.h
 *
 *  Created on: 26 apr. 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __RCC_REGISTERS_H__
#define __RCC_REGISTERS_H__

#include "types.h"

/*** RCC REGISTERS macros ***/

// Peripheral base address.
#define RCC     ((RCC_registers_t*) ((uint32_t) 0x40021000))

/*** RCC REGISTERS structures ***/

/*!******************************************************************
 * \struct RCC_registers_t
 * \brief RCC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR;
    volatile uint32_t ICSCR;
    volatile uint32_t RESERVED0;
    volatile uint32_t CFGR;
    volatile uint32_t CIER;
    volatile uint32_t CIFR;
    volatile uint32_t CICR;
    volatile uint32_t IOPRSTR;
    volatile uint32_t AHBRSTR;
    volatile uint32_t APB2RSTR;
    volatile uint32_t APB1RSTR;
    volatile uint32_t IOPENR;
    volatile uint32_t AHBENR;
    volatile uint32_t APB2ENR;
    volatile uint32_t APB1ENR;
    volatile uint32_t IOPSMENR;
    volatile uint32_t AHBSMENR;
    volatile uint32_t APB2SMENR;
    volatile uint32_t APB1SMENR;
    volatile uint32_t CCIPR;
    volatile uint32_t CSR;
} RCC_registers_t;

#endif /* __RCC_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
