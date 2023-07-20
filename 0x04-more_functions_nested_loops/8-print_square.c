/*
 * File: 8-print_square.c
 * Auth:  Saif Eddine belhaj
 */

#include "main.h"

/**
 * print_square - print hashes in pattern of size
 * @size: square size
 *
 * Return: no return
 */

void print_square(int size)
{
	int s, b;

	for (b = 1; b <= size; b++)
	{
		for (s = 1; s <= size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

