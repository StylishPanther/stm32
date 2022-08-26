#include "device.h"
#include "menu.h"


void PrintMenu(void)
{
	TxPrintf("\n\n");
	TxPrintf("========   STM32F407VGT6 Monitor V1.0   ========\n");	
	TxPrintf("========   by Lee Jin Ho Maze 23rd   =======\n");	
	TxPrintf("=====  https://blog.naver.com/zazz0907  ======\n\n");
}

void System_Information(void)
{
	TxPrintf("SYSCLK_Frequency : %d\n", HAL_RCC_GetSysClockFreq() / 1000000);
	TxPrintf("HCLK_Frequency : %d\n", HAL_RCC_GetHCLKFreq() / 1000000);
	TxPrintf("PCLK2(APB2)_Frequency : %d\n", HAL_RCC_GetPCLK1Freq() / 1000000);	
	TxPrintf("PCLK1(APB1)_Frequency : %d\n", HAL_RCC_GetPCLK2Freq() / 1000000);
}

