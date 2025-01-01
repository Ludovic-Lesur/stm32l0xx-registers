/*
 * i2c_registers.h
 *
 *  Created on: 12 may 2018
 *      Author: Ludo
 */

#ifndef __I2C_REGISTERS_H__
#define __I2C_REGISTERS_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** I2C REGISTERS macros ***/

// Peripherals base address.
#define I2C1    ((I2C_registers_t*) ((uint32_t) 0x40005400))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define I2C2    ((I2C_registers_t*) ((uint32_t) 0x40005800))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define I2C3    ((I2C_registers_t*) ((uint32_t) 0x40007800))
#endif

/*** I2C REGISTERS structures ***/

/*!******************************************************************
 * \struct I2C_registers_t
 * \brief I2C registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t OAR1;
    volatile uint32_t OAR2;
    volatile uint32_t TIMINGR;
    volatile uint32_t TIMEOUTR;
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t PECR;
    volatile uint32_t RXDR;
    volatile uint32_t TXDR;
} I2C_registers_t;

#endif /* __I2C_REGISTERS_H__ */
