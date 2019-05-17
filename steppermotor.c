/*
 * steppermotor.c
 *
 * Created: 16-05-2019 15:26:28
 * Author : ADMIN
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0x0F;
	int period=2;
    while (1) 
    {
		for(int i=0;i<50;i++)
		{
			PORTA=0x09;
			_delay_ms(period);
			PORTA=0x08;
			_delay_ms(period);
			PORTA=0x0C;
			_delay_ms(period);
			PORTA=0x06;
			_delay_ms(period);
			PORTA=0x04;
			_delay_ms(period);
			PORTA=0x02;
			_delay_ms(period);
			PORTA=0x03;
			_delay_ms(period);
			PORTA=0x01;
			_delay_ms(period);
			
			
			  }
	PORTA=0x09;
	_delay_ms(period);
	_delay_ms(1000);
	for(int i=0;i<50;i++)
	{
		PORTA=0x01;
		_delay_ms(period);
		PORTA=0x03;
		_delay_ms(period);
		PORTA=0x02;
		_delay_ms(period);
		PORTA=0x06;
		_delay_ms(period);
		PORTA=0x04;
		_delay_ms(period);
		PORTA=0x0c;
		_delay_ms(period);
		PORTA=0x08;
		_delay_ms(period);
		PORTA=0x09;
		_delay_ms(period);
		
	}
	PORTA=0x09;
	_delay_ms(period);
	_delay_ms(1000);
    }
}

