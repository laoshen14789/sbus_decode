/**
  ******************************************************************************
  * File Name          : USART.h
  * Description        : This file provides code for the configuration
  *                      of the USART instances.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __usart_H
#define __usart_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_USART1_UART_Init(void);
void MX_USART2_UART_Init(void);

/* USER CODE BEGIN Prototypes */
typedef struct
{
	uint16_t CH1;//??1??
	uint16_t CH2;//??2??
	uint16_t CH3;//??3??
	uint16_t CH4;//??4??
	uint16_t CH5;//??5??
	uint16_t CH6;//??6??
    uint16_t CH7;//??7??
    uint16_t CH8;//??8??
    uint16_t CH9;//??9??
    uint16_t CH10;//??10??
    uint16_t CH11;//??11??
    uint16_t CH12;//??12??
    uint16_t CH13;//??13??
    uint16_t CH14;//??14??
    uint16_t CH15;//??15??
    uint16_t CH16;//??16??
	uint8_t ConnectState;//??????????? 0=???,1=????
}SBUS_CH_Struct;

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ usart_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
