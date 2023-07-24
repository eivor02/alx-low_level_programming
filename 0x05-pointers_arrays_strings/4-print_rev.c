#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int e, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (e = n - 1; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}

