/*
 * aes_registers.h
 *
 *  Created on: 19 dec. 2018
 *      Author: Ludo
 */

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif

#ifndef STM32L0XX_REGISTERS_DISABLE

#ifndef __AES_REGISTERS_H__
#define __AES_REGISTERS_H__

#include "types.h"

/*** AES REGISTERS macros ***/

// Peripheral base address.
#define AES     ((AES_registers_t*) ((uint32_t) 0x40026000))

/*** AES REGISTERS structures ***/

/*!******************************************************************
 * \struct AES_registers_t
 * \brief AES registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t DINR;
    volatile uint32_t DOUTR;
    union {
        struct {
            volatile uint32_t KEYR0;
            volatile uint32_t KEYR1;
            volatile uint32_t KEYR2;
            volatile uint32_t KEYR3;
        };
        volatile uint32_t KEYR[4];
    };
    union {
        struct {
            volatile uint32_t IVR0;
            volatile uint32_t IVR1;
            volatile uint32_t IVR2;
            volatile uint32_t IVR3;
        };
        volatile uint32_t IVR[4];
    };
} AES_registers_t;

#endif /* __AES_REGISTERS_H__ */

#endif /* STM32L0XX_REGISTERS_DISABLE */
