/*
 * spi_registers.h
 *
 *  Created on: 19 jun. 2018
 *      Author: Ludo
 */

#ifndef __SPI_REGISTERS_H__
#define __SPI_REGISTERS_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** SPI REGISTERS macros ***/

// Peripherals base address.
#define SPI1    ((SPI_registers_t*) ((uint32_t) 0x40013000))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define SPI2    ((SPI_registers_t*) ((uint32_t) 0x40003800))
#endif

/*** SPI REGISTERS structures ***/

/*!******************************************************************
 * \struct SPI_registers_t
 * \brief SPI registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR1;
    volatile uint32_t CR2;
    volatile uint32_t SR;
    volatile uint32_t DR;
    volatile uint32_t CRCPR;
    volatile uint32_t RXCRCR;
    volatile uint32_t TXCRCR;
    volatile uint32_t I2SCFGR;
    volatile uint32_t I2SPR;
} SPI_registers_t;

#endif /* __SPI_REGISTERS_H__ */
