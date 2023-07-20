/*
 * File: 4-print_most_numbers.c
 * Auth:  Saif Eddine belhaj
 */

#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, minus 2 and 4.
 * Description: use only _putchar
 */
void print_most_numbers(void)
{
	int s;

	s = 0;
	while (s < 10)
	{
		if (s != 2 && s != 4)
			_putchar(s + '0');

		s++;
	}
	_putchar('\n');
}
