/*
 * flash_registers.h
 *
 *  Created on: 19 jun. 2018
 *      Author: Ludo
 */

#ifndef __FLASH_REGISTERS_H__
#define __FLASH_REGISTERS_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** FLASH REGISTERS macros ***/

// Peripheral base address.
#define FLASH                   ((FLASH_registers_t*) ((uint32_t) 0x40022000))
// EEPROM base address and size.
#define EEPROM_START_ADDRESS    (uint32_t) 0x08080000
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 1)
#define EEPROM_SIZE_BYTES       512
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 2)
#define EEPROM_SIZE_BYTES       1024
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3)
#define EEPROM_SIZE_BYTES       2048
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define EEPROM_SIZE_BYTES       6144
#endif

/*** FLASH REGISTERS structures ***/

/*!******************************************************************
 * \struct FLASH_registers_t
 * \brief FLASH registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ACR;
    volatile uint32_t PECR;
    volatile uint32_t PDKEYR;
    volatile uint32_t PEKEYR;
    volatile uint32_t PRGKEYR;
    volatile uint32_t OPTKEYR;
    volatile uint32_t SR;
    volatile uint32_t OPTR;
    volatile uint32_t WRPROT1;
    volatile uint32_t RESERVED[23];
    volatile uint32_t WRPROT2;
} FLASH_registers_t;

#endif /* __FLASH_REGISTERS_H__ */
