/*
 * File: 0-putchar.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * in lowercase.
 * Return: Always(0).
 */


void print_alphabet_x10(void)
{
	char S;
	int B = 0;

	while (B <= 9)
	{
		for (S = 'a'; S <= 'z'; S++)
		{
			_putchar(S);
		}

		_putchar('\n');

		B++;
	}
}

