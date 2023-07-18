/*
 * File: 9-times_table.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"
/**
 * times_table - s function that prints the 9 times table, starting with 0
 *
 * Return: times table
 */

void times_table(void)
{
	int s, b;

	s= 0;
	while (s<= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if ((s* b) > 9)
			{
				_putchar(((s* b) / 10) + '0');
				_putchar(((s* b) % 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar((s* b) + '0');
			}
			else
			{
				_putchar((s* b) + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		s++;
		_putchar('\n');
	}
}

