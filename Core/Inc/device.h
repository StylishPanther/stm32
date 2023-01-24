#ifndef __DEVICE_H
#define __DEVICE_H

//#include "stm32f4xx_hal.h"


#ifndef STM32F4xx_DATA_TYPES
#define STM32F4xx_DATA_TYPES

typedef unsigned char   BOOL;
typedef unsigned char   BYTE;

typedef short			int16;
typedef int             int32;
typedef unsigned short  UINT16;
typedef unsigned short  Uint16;
typedef unsigned int    uint32;
typedef unsigned int    Uint32;
typedef float           float32;
typedef long double     float64;

#define UP		3
#define FALL	2
#define ON		1
#define ON_L	1L
#define OFF		0
#define TRUE 	1
#define FALSE 	0
#define HIGH	1
#define LOW		0
//#define NULL	(void *)0
#endif

#include <stdarg.h>
//#include "main.h"
#include "uart.h"

//#include "gpio.h"
//#include "timer.h"
#include "variable.h"
//#include "pwm.h"
#include "menu.h"
//#include "rcc.h"
//#include "spi.h"
#include "vfd.h"
#include "sensor.h"
#include "main.h"
#include "test.h"
//HAL Library 
#include "stm32f4xx_hal.h"

#endif

