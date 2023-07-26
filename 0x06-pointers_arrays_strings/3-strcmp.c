#include "main.h"

/**
 * _strcmp - return length of a string
 *
 * @s1: The first string.
 * @s2: second string.
 * Return: positive negative or zero.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
