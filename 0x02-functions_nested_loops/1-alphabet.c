/*
 * File: 0-putchar.c
 * Auth: Saif Eddine belhaj
 *
 */

#include "main.h"

/**
 * print_alphabet - print "a to z" in lowercase,followed by a new line. 
 * Return: always success
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
