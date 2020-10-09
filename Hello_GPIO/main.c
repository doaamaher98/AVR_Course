/************************************************/
/* Author   : Doaa Maher						*/
/* Date     : 6 OCT 2020						*/
/* Version  : 1.0								*/
/************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"

int main (void)
{
	MDIO_VidSetPinDirection (PIN0, PORTA , OUTPUT);
	MDIO_VidSetPinValue 	(PIN0, PORTA , 1);
	
	
	MDIO_VidSetPortDirection(PORTB, OUTPUT);
	MDIO_VidSetPortValue	(PORTB, LOW);

	MDIO_u8GetPinValue(1, PIN0);

	while (1)
	{

	}

}

