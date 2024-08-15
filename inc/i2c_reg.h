/*
 * i2c_reg.h
 *
 *  Created on: 12 may 2018
 *      Author: Ludo
 */

#ifndef __I2C_REG_H__
#define __I2C_REG_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** I2C REG macros ***/

// Peripherals base address.
#define I2C1	((I2C_registers_t*) ((uint32_t) 0x40005400))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define I2C2	((I2C_registers_t*) ((uint32_t) 0x40005800))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define I2C3	((I2C_registers_t*) ((uint32_t) 0x40007800))
#endif

/*** I2C REG structures ***/

/*!******************************************************************
 * \enum I2C_registers_t
 * \brief I2C registers map.
 *******************************************************************/
typedef struct {
	volatile uint32_t CR1;    		// I2C control register 1.
	volatile uint32_t CR2;    		// I2C control register 2.
	volatile uint32_t OAR1;    		// I2C own address 1 register.
	volatile uint32_t OAR2;    		// I2C own address 2 register.
	volatile uint32_t TIMINGR;  	// I2C timing register.
	volatile uint32_t TIMEOUTR;		// I2C timeout register.
	volatile uint32_t ISR;    		// I2C interrupt and status register.
	volatile uint32_t ICR;    		// I2C interrupt clear register.
	volatile uint32_t PECR;    		// I2C PEC register.
	volatile uint32_t RXDR;    		// I2C receive data register.
	volatile uint32_t TXDR;    		// I2C transmit data register.
} I2C_registers_t;

#endif /* __I2C_REG_H__ */
