#include "main.h"

/**
 * string_toupper - function that Changes all lowercase
 * letters of a string to uppercase.
 * @s: string to be changed.
 *
 * Return: pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int s = 0;

	while (str[s])
	{
		if (str[s] >= 'a' && str[s] <= 'z')
			str[s] -= 32;

		s++;
	}

	return (str);
}

