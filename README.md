# Description

This repository contains the registers address definition of the STM32L0xx MCUs peripherals.

# Compilation flags

| **Flag name** | **Value** | **Description** |
|:---:|:---:|:---:|
| `STM32L0XX_REGISTERS_DISABLE_FLAGS_FILE` | `defined` / `undefined` | Disable the `stm32l0xx_registers_flags.h` header file inclusion when compilation flags are given in the project settings or by command line. |
| `STM32L0XX_REGISTERS_MCU_CATEGORY` | `1` / `2` / `3` / `5` | Defines the MCU category to configure memories size and peripherals availability. |
