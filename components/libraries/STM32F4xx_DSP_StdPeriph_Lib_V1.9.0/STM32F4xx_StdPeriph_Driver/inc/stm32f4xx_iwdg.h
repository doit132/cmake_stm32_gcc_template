/**
 ******************************************************************************
 * @file    stm32f4xx_iwdg.h
 * @author  MCD Application Team
 * @version V1.8.1
 * @date    27-January-2022
 * @brief   This file contains all the functions prototypes for the IWDG
 *          firmware library.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2016 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F4xx_IWDG_H
	#define __STM32F4xx_IWDG_H

	#ifdef __cplusplus
extern "C" {
	#endif

	/* Includes ------------------------------------------------------------------*/
	#include "stm32f4xx.h"

	/** @addtogroup STM32F4xx_StdPeriph_Driver
	 * @{
	 */

	/** @addtogroup IWDG
	 * @{
	 */

	/* Exported types ------------------------------------------------------------*/
	/* Exported constants --------------------------------------------------------*/

	/** @defgroup IWDG_Exported_Constants
	 * @{
	 */

	/** @defgroup IWDG_WriteAccess
	 * @{
	 */
	#define IWDG_WriteAccess_Enable	 ((uint16_t)0x5555)
	#define IWDG_WriteAccess_Disable ((uint16_t)0x0000)
	#define IS_IWDG_WRITE_ACCESS(ACCESS)                                                       \
		(((ACCESS) == IWDG_WriteAccess_Enable) || ((ACCESS) == IWDG_WriteAccess_Disable))
	/**
	 * @}
	 */

	/** @defgroup IWDG_prescaler
	 * @{
	 */
	#define IWDG_Prescaler_4   ((uint8_t)0x00)
	#define IWDG_Prescaler_8   ((uint8_t)0x01)
	#define IWDG_Prescaler_16  ((uint8_t)0x02)
	#define IWDG_Prescaler_32  ((uint8_t)0x03)
	#define IWDG_Prescaler_64  ((uint8_t)0x04)
	#define IWDG_Prescaler_128 ((uint8_t)0x05)
	#define IWDG_Prescaler_256 ((uint8_t)0x06)
	#define IS_IWDG_PRESCALER(PRESCALER)                                                       \
		(((PRESCALER) == IWDG_Prescaler_4) || ((PRESCALER) == IWDG_Prescaler_8) ||         \
		 ((PRESCALER) == IWDG_Prescaler_16) || ((PRESCALER) == IWDG_Prescaler_32) ||       \
		 ((PRESCALER) == IWDG_Prescaler_64) || ((PRESCALER) == IWDG_Prescaler_128) ||      \
		 ((PRESCALER) == IWDG_Prescaler_256))
	/**
	 * @}
	 */

	/** @defgroup IWDG_Flag
	 * @{
	 */
	#define IWDG_FLAG_PVU	       ((uint16_t)0x0001)
	#define IWDG_FLAG_RVU	       ((uint16_t)0x0002)
	#define IS_IWDG_FLAG(FLAG)     (((FLAG) == IWDG_FLAG_PVU) || ((FLAG) == IWDG_FLAG_RVU))
	#define IS_IWDG_RELOAD(RELOAD) ((RELOAD) <= 0xFFF)
/**
 * @}
 */

/**
 * @}
 */

/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/* Prescaler and Counter configuration functions ******************************/
void IWDG_WriteAccessCmd(uint16_t IWDG_WriteAccess);
void IWDG_SetPrescaler(uint8_t IWDG_Prescaler);
void IWDG_SetReload(uint16_t Reload);
void IWDG_ReloadCounter(void);

/* IWDG activation function ***************************************************/
void IWDG_Enable(void);

/* Flag management function ***************************************************/
FlagStatus IWDG_GetFlagStatus(uint16_t IWDG_FLAG);

	#ifdef __cplusplus
}
	#endif

#endif /* __STM32F4xx_IWDG_H */

/**
 * @}
 */

/**
 * @}
 */
