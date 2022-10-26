/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ibrahim Diab
 * @brief          : Lab_2 for studying ARM interrupts.
 ******************************************************************************
 */

#include <avr/io.h>
#include <avr/delay.h>
#include <avr/interrupt.h>


int main()
{
	INT_init();
	GPIO_init();

	while(1)
	{
	 //Reset led pins as low voltage.
	 PORTD &= ~(1<<5);
	 PORTD &= ~(1<<6);
	 PORTD &= ~(1<<7);
	}
	return 0;
}

void INT_init()
{
	// INT1 generates an interrupt request when rising edge happen.
	MCUCR |=(1<<ISC10);
	MCUCR |=(1<<ISC11);

	// INT0 generates an interrupt request when any logical change.
	MCUCR |= (1<<ISC00);
	MCUCR &= ~(1<<ISC01);

	// INT2 generates an interrupt request when failing edge happens.
	MCUCSR &= ~(1<<ISC2);

	// Enable interrupt 1.
	GICR |= (1<<INT1);

	// Enable interrupt 0.
	GICR |= (1<<INT0);

	// Enable interrupt 2.
	GICR |= (1<<INT2);

	// Enable global interrupts.
	sei();

}

void GPIO_init()
{
	//set pins as output.
	DDRD |= (1<<5);
	DDRD |= (1<<6);
	DDRD |= (1<<7);
}


ISR (INT0_vect)
{
	PORTD |=(1<<5);
	_delay_ms(1000);
}

ISR (INT1_vect)
{
	PORTD |=(1<<6);
	_delay_ms(1000);
}

ISR (INT2_vect)
{
	PORTD |=(1<<7);
	_delay_ms(1000);
}
