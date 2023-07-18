/*
 * File: 5-sign.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * print_sign - check if n is +, - or 0
 * Return: 1 if the number is > than zero,
 * @n: The number of which the sign will be printed.
 *
 * 0 if the number is zero,
 * -1 if the number is < than zero.
 */

int print_sign(int n)

{
i	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
