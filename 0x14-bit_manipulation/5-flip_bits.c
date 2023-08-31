#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another.
 * @num1: Number one.
 * @num2: Number two.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int numBits = 0;

	while (num1 || num2)
	{
		if ((num1 & 1) != (num2 & 1))
			numBits++;
		num1 >>= 1;
		num2 >>= 1;
	}

	return (numBits);
}}
