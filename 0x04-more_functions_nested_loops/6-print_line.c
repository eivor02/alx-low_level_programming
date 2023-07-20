
/*
 * File: 6-print_line.c
 * Auth:  Saif Eddine belhaj
 */

#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times line is printed
 * Description: Can only use _putchar to print
 */
void print_line(int n)
{
	int s;

	s = 0;
	while (s < n)
	{
		_putchar('_');

		s++;
	}
	_putchar('\n');
}

