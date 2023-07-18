/*
 * File: 0-putchar.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * Description: Write program to print alphabet in lowercase using _putchar 
 * followed by a new line.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
