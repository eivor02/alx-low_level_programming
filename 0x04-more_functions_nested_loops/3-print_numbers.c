/*
 * File: 3-print_numbers.c
 * Auth:  Saif Eddine belhaj
 */

#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int s;

	s = 0;
	while (s < 10)
	{
		_putchar(s + '0');
		s++;
	}
	_putchar('\n');
}
