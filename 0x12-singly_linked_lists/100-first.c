#include <stdio.h>

/**
 * bmain - Function executed before main.
 *
 * Return: void
 */
void __attribute__ ((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
