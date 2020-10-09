/************************************************/
/* Author   : Doaa Maher						*/
/* Date     : 6 OCT 2020						*/
/* Version  : 1.0								*/
/************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void MDIO_VidSetPinDirection  (u8 PinNumber, u8 PortNumber, u8 Direction)
{
	switch (PortNumber)
	{
		case PORTA :
		{
			if (Direction == OUTPUT)
			{
				SET_BIT(DDRA_REG, PinNumber) ;
			}
			else if (Direction == INPUT)
			{
				CLR_BIT (DDRA_REG, PinNumber) ;
			}
			break;
		}
		case PORTB :
		if (Direction == OUTPUT)
			{
				SET_BIT(DDRB_REG, PinNumber) ;
			}
			else if (Direction == INPUT)
			{
				CLR_BIT (DDRB_REG, PinNumber) ;
			}
			break;
		case PORTC :
		if (Direction == OUTPUT)
			{
				SET_BIT(DDRC_REG, PinNumber) ;
			}
			else if (Direction == INPUT)
			{
				CLR_BIT (DDRC_REG, PinNumber) ;
			}
			break;
		case PORTD :
		if (Direction == OUTPUT)
			{
				SET_BIT(DDRD_REG, PinNumber) ;
			}
			else if (Direction == INPUT)
			{
				CLR_BIT (DDRD_REG, PinNumber) ;
			}
			break;
	}
}

void MDIO_VidSetPinValue(u8 PinNumber , u8 PortNumber , u8 Value)
{
	switch (PortNumber)
	{
		case PORTA :
			if (Value == HIGH)
			{
				SET_BIT(PORTA_REG, PinNumber) ;
			}
			else if (Value == LOW)
			{
				CLR_BIT (PORTA_REG, PinNumber) ;
			}
			break;
			
		case PORTB :
		if (Value == HIGH)
			{
				SET_BIT(PORTB_REG, PinNumber) ;
			}
			else if (Value == LOW)
			{
				CLR_BIT (PORTB_REG, PinNumber) ;
			}
			break;
			
		case PORTC :
		if (Value == HIGH)
			{
				SET_BIT(PORTC_REG, PinNumber) ;
			}
			else if (Value == LOW)
			{
				CLR_BIT (PORTC_REG, PinNumber) ;
			}
			break;
			
		case PORTD :
		if (Value == HIGH)
			{
				SET_BIT(PORTD_REG, PinNumber) ;
			}
			else if (Value == LOW)
			{
				CLR_BIT (PORTD_REG, PinNumber) ;
			}
			break;
			
	}
}

void MDIO_VidSetPortDirection (u8 PortNumber , u8 Direction)
{
	switch (PortNumber)
	{
		case PORTA :
			if (Direction == OUTPUT)
			{
				DDRA_REG = 0XFF;
			}
			else if (Direction == INPUT)
			{
				DDRA_REG = 0X00;
			}
			break;
			
		case PORTB :
		if (Direction == OUTPUT)
			{
				DDRB_REG = 0XFF;
			}
			else if (Direction == INPUT)
			{
				DDRB_REG = 0X00;
			}
			break;
			
		case PORTC :
		if (Direction == OUTPUT)
			{
				DDRC_REG = 0XFF;
			}
			else if (Direction == INPUT)
			{
				DDRC_REG = 0X00;
			}
			break;
			
		case PORTD :
		if (Direction == OUTPUT)
			{
				DDRD_REG = 0XFF;
			}
			else if (Direction == INPUT)
			{
				DDRD_REG = 0X00;
			}
			break;		
	}
}

void MDIO_VidSetPortValue     (u8 PortNumber , u8 Value)
{
	switch (PortNumber)
	{
		case PORTA :
			if (Value == HIGH)
			{
				PORTA_REG = Value;
			}
			else if (Value == LOW)
			{
				PORTA_REG = Value;
			}
			break;
			
		case PORTB :
		if (Value == HIGH)
			{
				PORTB_REG = Value;
			}
			else if (Value == LOW)
			{
				PORTB_REG = Value;
			}
			break;
			
		case PORTC :
		if (Value == HIGH)
			{
				PORTC_REG = Value;
			}
			else if (Value == LOW)
			{
				PORTC_REG = Value;
			}
			break;
			
		case PORTD :
		if (Value == HIGH)
			{
				PORTD_REG = Value;
			}
			else if (Value == LOW)
			{
				PORTD_REG = Value;
			}
			break;		
	}
}

u8   MDIO_u8GetPinValue 	  (u8 PortNumber , u8 PinNumber)
{
	u8 Local_PinValue;
	switch (PortNumber)
	{
		case PORTA :
		{
			Local_PinValue = GET_BIT(PINA_REG , PinNumber);
		}
		break;	
		
		case PORTB :
		{
			Local_PinValue = GET_BIT(PINB_REG , PinNumber);
		}
		break;	
			
		case PORTC :
		{
			Local_PinValue = GET_BIT(PINC_REG , PinNumber);
		}
		break;	
			
		case PORTD :
		{
			Local_PinValue = GET_BIT(PIND_REG , PinNumber);
		}
		break;	
	}
	return Local_PinValue;
}