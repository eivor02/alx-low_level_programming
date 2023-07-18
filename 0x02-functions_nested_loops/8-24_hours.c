/*
 * File: 8-24_hours.c
 * Auth: Saif Eddine belhaj
 *
 */




#include "main.h"
/**
 * jack_bauer - print every minute of the day starting
 * from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int S, B;

	for (S = 0; S < 24; S++)
	{
		for (B = 0; B < 60; B++)
		{
			_putchar((S / 10) + '0');
			_putchar((S % 10) + '0');
			_putchar(':');
			_putchar((B / 10) + '0');
			_putchar((B % 10) + '0');
			_putchar('\n');
		}
	}
}

