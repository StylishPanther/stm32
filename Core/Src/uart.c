#include "device.h"
#include "uart.h"

static void UART4_SendData(const char data);
static void UART4_SendString(char *str);

void USART1_SendData(char Data)
{
  /* Transmit Data */
  	//UART_HandleTypeDef tuart1  
	//while(!__HAL_UART_GET_FLAG(huart1,USART_FLAG_TC));
	//USART1->DR = (Data & (uint16_t)0x01FF);
}

void USART1_SendString(char *str)
{
	while(*str)
	{
		if(*str=='\n')
		{
			USART1_SendData('\r');
		}
		
		USART1_SendData(*str++);
	}
}


void TxPrintf(const char *Form, ... )
{
    static char Buff[128];
    va_list ArgPtr;
    va_start(ArgPtr,Form);	 
    vsprintf(Buff, Form, ArgPtr);
    va_end(ArgPtr);
    UART4_SendString(Buff);
}

static void UART4_SendData(const char data)
{
  /* Transmit Data */ 
	while(!(UART4->SR & UART_FLAG_TC) );
	UART4->DR = (data & (uint16_t)0x01FF);	
}

static void UART4_SendString(char *str) // ???? ???? ??
{
    while(*str)
		{
			if(*str=='\n')
			{
				UART4_SendData('\r');
			}
		
			UART4_SendData(*str++);
		}
}

