#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks for allocation success.
 * @b: amount of bytes to allocate.
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, the program exits with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}
	
	return ptr;
}
