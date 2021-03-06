/*
*********************************************************************************************************
*
*                                           UART INTERFACE
*
* Filename      : uart.h
* Version       : V1.00
* Programmer(s) : Palladin
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/
#ifndef __UART_H_
#define __UART_H_

/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/
#include "stm32f10x.h"

#include "fifo_buffer.h"
/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/
#define  UART1_RX_INTERRAPT_ENABLE    0
#define  UART1_TX_INTERRAPT_ENABLE    0

#define  UART2_RX_INTERRAPT_ENABLE    0
#define  UART2_TX_INTERRAPT_ENABLE    0

/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                              DATA TYPES
*********************************************************************************************************
*/
typedef enum usart {
	UART1 = 1,
	UART2,
//	UART3,
//	UART_MAX_NUM,
} uart_t;

/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void USART1_IRQHandler(void) __attribute__ ((weak));
void USART2_IRQHandler(void) __attribute__ ((weak));
void UartInit(uart_t number_uart, u32 baud_rate);
//void Uart3Init(u32  baud_rate);
u8 UartReadByte(uart_t number_uart);
void UartWrByte(uart_t number_uart, u8 c);
void UartWrStr(uart_t number_uart, u8  *p_str);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif /* UART_H */
