#include "device.h"
#include "sensor.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM4)
	{
		//Motor Timer Interrupt
	}

	else if(htim->Instance == TIM9)
	{
		//Sensor Timer Interrupt
	}
}

