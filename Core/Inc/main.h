/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SDA_Pin GPIO_PIN_0
#define SDA_GPIO_Port GPIOF
#define SCL_Pin GPIO_PIN_1
#define SCL_GPIO_Port GPIOF
#define IO_BUMPER_L_Pin GPIO_PIN_3
#define IO_BUMPER_L_GPIO_Port GPIOF
#define IO_BUMPER_R_Pin GPIO_PIN_5
#define IO_BUMPER_R_GPIO_Port GPIOF
#define ACCEL_SENS_2_Pin GPIO_PIN_7
#define ACCEL_SENS_2_GPIO_Port GPIOF
#define ACCEL_SENS_1_Pin GPIO_PIN_9
#define ACCEL_SENS_1_GPIO_Port GPIOF
#define BRAKE_SENS_1_Pin GPIO_PIN_10
#define BRAKE_SENS_1_GPIO_Port GPIOF
#define TERMISTOR_Pin GPIO_PIN_0
#define TERMISTOR_GPIO_Port GPIOC
#define ACCEL_POT_Pin GPIO_PIN_3
#define ACCEL_POT_GPIO_Port GPIOC
#define BRAKE_POT_Pin GPIO_PIN_0
#define BRAKE_POT_GPIO_Port GPIOA
#define TX_EXTENDER_Pin GPIO_PIN_2
#define TX_EXTENDER_GPIO_Port GPIOA
#define RX_EXTENDER_Pin GPIO_PIN_3
#define RX_EXTENDER_GPIO_Port GPIOA
#define BRAKE_SENS_2_Pin GPIO_PIN_4
#define BRAKE_SENS_2_GPIO_Port GPIOA
#define MCP2515_CLK_Pin GPIO_PIN_5
#define MCP2515_CLK_GPIO_Port GPIOA
#define WHEEL_R_ESTOP_VD_Pin GPIO_PIN_6
#define WHEEL_R_ESTOP_VD_GPIO_Port GPIOA
#define MCP2515_MOSI_Pin GPIO_PIN_7
#define MCP2515_MOSI_GPIO_Port GPIOA
#define WHEEL_L_ESTOP_VD_Pin GPIO_PIN_4
#define WHEEL_L_ESTOP_VD_GPIO_Port GPIOC
#define CURRENT_SENS_Pin GPIO_PIN_1
#define CURRENT_SENS_GPIO_Port GPIOB
#define SPARE_VD_Pin GPIO_PIN_11
#define SPARE_VD_GPIO_Port GPIOF
#define STEER_SENS_1_Pin GPIO_PIN_13
#define STEER_SENS_1_GPIO_Port GPIOF
#define SPARE_Pin GPIO_PIN_15
#define SPARE_GPIO_Port GPIOF
#define BRAKE_CW_Pin GPIO_PIN_0
#define BRAKE_CW_GPIO_Port GPIOG
#define BRAKE_CCW_Pin GPIO_PIN_1
#define BRAKE_CCW_GPIO_Port GPIOG
#define STEER_CW_Pin GPIO_PIN_7
#define STEER_CW_GPIO_Port GPIOE
#define STEER_CCW_Pin GPIO_PIN_8
#define STEER_CCW_GPIO_Port GPIOE
#define STEER_PWM_Pin GPIO_PIN_9
#define STEER_PWM_GPIO_Port GPIOE
#define ACCEL_CW_Pin GPIO_PIN_10
#define ACCEL_CW_GPIO_Port GPIOE
#define BRAKE_PWM_Pin GPIO_PIN_11
#define BRAKE_PWM_GPIO_Port GPIOE
#define ACCEL_CCW_Pin GPIO_PIN_12
#define ACCEL_CCW_GPIO_Port GPIOE
#define ACCEL_PWM_Pin GPIO_PIN_13
#define ACCEL_PWM_GPIO_Port GPIOE
#define SAFETY_PWM_TINY_Pin GPIO_PIN_14
#define SAFETY_PWM_TINY_GPIO_Port GPIOE
#define TX_LLC_Pin GPIO_PIN_14
#define TX_LLC_GPIO_Port GPIOB
#define RX_LLC_Pin GPIO_PIN_15
#define RX_LLC_GPIO_Port GPIOB
#define TX_SBUS_Pin GPIO_PIN_8
#define TX_SBUS_GPIO_Port GPIOD
#define RX_SBUS_Pin GPIO_PIN_9
#define RX_SBUS_GPIO_Port GPIOD
#define SHUTDOWN_Pin GPIO_PIN_10
#define SHUTDOWN_GPIO_Port GPIOD
#define INC_Pin GPIO_PIN_11
#define INC_GPIO_Port GPIOD
#define CS_Pin GPIO_PIN_12
#define CS_GPIO_Port GPIOD
#define UD_Pin GPIO_PIN_14
#define UD_GPIO_Port GPIOD
#define SENSOR_OC_Pin GPIO_PIN_2
#define SENSOR_OC_GPIO_Port GPIOG
#define SPARE_OC_Pin GPIO_PIN_3
#define SPARE_OC_GPIO_Port GPIOG
#define BRAKE_BOTTOM_ESTOP_Pin GPIO_PIN_4
#define BRAKE_BOTTOM_ESTOP_GPIO_Port GPIOG
#define BRAKE_TOP_ESTOP_Pin GPIO_PIN_5
#define BRAKE_TOP_ESTOP_GPIO_Port GPIOG
#define BUMPER_R_Pin GPIO_PIN_6
#define BUMPER_R_GPIO_Port GPIOG
#define BUMPER_L_Pin GPIO_PIN_7
#define BUMPER_L_GPIO_Port GPIOG
#define EMERG_OC_Pin GPIO_PIN_8
#define EMERG_OC_GPIO_Port GPIOG
#define TX_Pin GPIO_PIN_6
#define TX_GPIO_Port GPIOC
#define RX_Pin GPIO_PIN_7
#define RX_GPIO_Port GPIOC
#define SPRAYER_4_Pin GPIO_PIN_9
#define SPRAYER_4_GPIO_Port GPIOC
#define SPRAYER_3_Pin GPIO_PIN_8
#define SPRAYER_3_GPIO_Port GPIOA
#define SPRAYER_2_Pin GPIO_PIN_9
#define SPRAYER_2_GPIO_Port GPIOA
#define SPRAYER_1_Pin GPIO_PIN_10
#define SPRAYER_1_GPIO_Port GPIOA
#define DRIVE4X4_Pin GPIO_PIN_15
#define DRIVE4X4_GPIO_Port GPIOA
#define SEAT_Pin GPIO_PIN_10
#define SEAT_GPIO_Port GPIOC
#define HORN_Pin GPIO_PIN_11
#define HORN_GPIO_Port GPIOC
#define CONTROL_Pin GPIO_PIN_12
#define CONTROL_GPIO_Port GPIOC
#define FORWARD_Pin GPIO_PIN_0
#define FORWARD_GPIO_Port GPIOD
#define REVERSE_Pin GPIO_PIN_1
#define REVERSE_GPIO_Port GPIOD
#define NEUTRAL_Pin GPIO_PIN_2
#define NEUTRAL_GPIO_Port GPIOD
#define S_LEVER_Pin GPIO_PIN_3
#define S_LEVER_GPIO_Port GPIOD
#define PTO_Pin GPIO_PIN_4
#define PTO_GPIO_Port GPIOD
#define STROBE_Pin GPIO_PIN_5
#define STROBE_GPIO_Port GPIOD
#define MCP2515_CS_Pin GPIO_PIN_7
#define MCP2515_CS_GPIO_Port GPIOD
#define MCP2515_MISO_Pin GPIO_PIN_9
#define MCP2515_MISO_GPIO_Port GPIOG
#define SCL_DIAG_Pin GPIO_PIN_6
#define SCL_DIAG_GPIO_Port GPIOB
#define SDA_DIAG_Pin GPIO_PIN_7
#define SDA_DIAG_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
