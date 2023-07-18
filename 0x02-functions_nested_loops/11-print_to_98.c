

/*
 * File: 11-print_to_98.c
 * Auth: Saif Eddine belhaj
 */


#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98,
 * followed by a new line
 * @a: int type
 * Return:  ...
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{

		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
