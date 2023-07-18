/*
 * File: 5-sign.c
 * Auth: Saif Eddine belhaj
 *
 

 #include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * This function takes an integer as an argument and prints the sign of the integer.
 *
 * Return: 1 if the number is positive, 0 if the number is zero,
 * -1 if the number is negative.
 */

int print_sign(int n)
{
	if (n > 0)
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

