/*
 * gpio_reg.h
 *
 *  Created on: 26 apr. 2018
 *      Author: Ludo
 */

#ifndef __GPIO_REG_H__
#define __GPIO_REG_H__

#ifndef STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32l0xx_registers_flags.h"
#endif
#include "types.h"

/*** GPS REG macros ***/

// Peripherals base address.
#define GPIOA   ((GPIO_registers_t*) ((uint32_t) 0x50000000))
#define GPIOB   ((GPIO_registers_t*) ((uint32_t) 0x50000400))
#define GPIOC   ((GPIO_registers_t*) ((uint32_t) 0x50000800))
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define GPIOD   ((GPIO_registers_t*) ((uint32_t) 0x50000C00))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define GPIOE   ((GPIO_registers_t*) ((uint32_t) 0x50001000))
#endif
#if (STM32L0XX_REGISTERS_MCU_CATEGORY == 2) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 3) || (STM32L0XX_REGISTERS_MCU_CATEGORY == 5)
#define GPIOH   ((GPIO_registers_t*) ((uint32_t) 0x50001C00))
#endif

/*** GPIO REG structures ***/

/*!******************************************************************
 * \struct GPIO_registers_t
 * \brief GPIO registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t MODER;    // GPIO port mode register.
    volatile uint32_t OTYPER;   // GPIO port output type register.
    volatile uint32_t OSPEEDR;  // GPIO port output speed register.
    volatile uint32_t PUPDR;    // GPIO port pull-up/pull-down register.
    volatile uint32_t IDR;      // GPIO port input data register.
    volatile uint32_t ODR;      // GPIO port output data register.
    volatile uint32_t BSRR;     // GPIO port bit set/reset low register.
    volatile uint32_t LCKR;     // GPIO port configuration lock register.
    volatile uint32_t AFRL;     // GPIO alternate function low register.
    volatile uint32_t AFRH;     // GPIO alternate function high register.
    volatile uint32_t BRR;      // GPIO port bit reset register.
} GPIO_registers_t;

#endif /* __GPIO_REG_H__ */
