/*
 * File: 7-print_diagonal.c
 * Auth:  Saif Eddine belhaj
 */


#include "main.h"

/**
 * print_diagonal - print backslash diagonally
 * @n: The number of \ characters to be printed.
 *
 * Return: prints lines and space to the value of n
 */

void print_diagonal(int n)
{
	int s, b;

	for (s = 1; a <= n; s++)
	{
		for (b = 2; b <= s; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

