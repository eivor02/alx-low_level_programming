#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Binary number as a string.
 *
 * Return: The converted unsigned int value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len = 0, base_two = 1;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			ui += base_two;
	}

	return (ui);
}

