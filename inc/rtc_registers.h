/*
 * rtc_registers.h
 *
 *  Created on: 25 nov. 2018
 *      Author: Ludo
 */

#ifndef __RTC_REGISTERS_H__
#define __RTC_REGISTERS_H__

#include "types.h"

/*** RTC REGISTERS macros ***/

// Peripheral base address.
#define RTC     ((RTC_registers_t*) ((uint32_t) 0x40002800))

/*** RTC REGISTERS structures ***/

/*!******************************************************************
 * \struct RTC_registers_t
 * \brief RTC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t TR;
    volatile uint32_t DR;
    volatile uint32_t CR;
    volatile uint32_t ISR;
    volatile uint32_t PRER;
    volatile uint32_t WUTR;
    volatile uint32_t RESERVED0;
    volatile uint32_t ALRMAR;
    volatile uint32_t ALRMBR;
    volatile uint32_t WPR;
    volatile uint32_t SSR;
    volatile uint32_t SHIFTR;
    volatile uint32_t TSTR;
    volatile uint32_t TSDR;
    volatile uint32_t TSSSR;
    volatile uint32_t CALR;
    volatile uint32_t TAMPCR;
    volatile uint32_t ALRMASSR;
    volatile uint32_t ALRMBSSR;
    volatile uint32_t OR;
    volatile uint32_t BKP0R;
    volatile uint32_t BKP1R;
    volatile uint32_t BKP2R;
    volatile uint32_t BKP3R;
    volatile uint32_t BKP4R;
} RTC_registers_t;

#endif /* __RTC_REGISTERS_H__ */
