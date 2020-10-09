/************************************************/
/* Author   : Doaa Maher						*/
/* Date     : 6 OCT 2020						*/
/* Version  : 1.0								*/
/************************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/* Declare your functions */
void MDIO_VidSetPinDirection  (u8 PinNumber, u8 PortNumber, u8 Direction);
void MDIO_VidSetPinValue      (u8 PinNumber , u8 PortNumber , u8 Value);

void MDIO_VidSetPortDirection (u8 PortNumber , u8 Direction);
void MDIO_VidSetPortValue     (u8 PortNumber , u8 Value);

u8   MDIO_u8GetPinValue 	  (u8 PortNumber , u8 PinNumber);

/* Define all your pins,ports,states */
#define 		PORTA			0
#define 		PORTB			1
#define 		PORTC			2
#define 		PORTD			3

#define 		PIN0			0
#define 		PIN1			1
#define 		PIN2			2
#define 		PIN3			3
#define 		PIN4			4
#define 		PIN5			5
#define 		PIN6			6
#define 		PIN7			7

#define 		HIGH			1
#define 		LOW				0

#define 		INPUT			0
#define 		OUTPUT			1


#endif

