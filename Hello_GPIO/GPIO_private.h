/************************************************/
/* Author   : Doaa Maher						*/
/* Date     : 6 OCT 2020						*/
/* Version  : 1.0								*/
/************************************************/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/* Base Addresses and Registers for each PORT,PIN and DDR
   Memory Mapped : () 									*/
#define  DDRA_REG			    *((volatile u8 *)0x3A)
#define PORTA_REG			    *((volatile u8 *)0x3B)
#define  PINA_REG			    *((volatile u8*) 0x39)

#define  DDRB_REG				*((volatile u8 *)0x37)
#define PORTB_REG				*((volatile u8 *)0x38)
#define  PINB_REG				*((volatile u8*) 0x36)

#define  DDRC_REG				*((volatile u8 *)0x34)
#define PORTC_REG				*((volatile u8 *)0x35)
#define  PINC_REG				*((volatile u8*) 0x33)

#define  DDRD_REG				*((volatile u8 *)0x31)
#define PORTD_REG				*((volatile u8 *)0x32)
#define  PIND_REG				*((volatile u8*) 0x30)

#endif
