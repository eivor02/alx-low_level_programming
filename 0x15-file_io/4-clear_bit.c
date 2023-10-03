#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit.
 *
 * Return: 1 if successful, -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
