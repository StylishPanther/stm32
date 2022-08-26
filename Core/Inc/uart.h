//###########################################################################
//
// FILE		: uart.h
//
// TITLE	: uart.h file.
//
// Author	: Lee Jin Ho
//
// Company	: Maze & Hz
//
//###########################################################################
// $Release Date: 2022.08.26 $
//###########################################################################


#ifndef __UART_H
#define __UART_H


extern void TxPrintf(const char *Form, ... );

void USART1_SendData(char Data);
void USART1_SendString(char *str);



#endif

