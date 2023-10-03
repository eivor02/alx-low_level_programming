#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit at the given index, or -1 if the index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
