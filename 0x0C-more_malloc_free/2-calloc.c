#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it with zeros.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 * If nmemb or size is 0, the function returns NULL.
 * If malloc fails, the function returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize = nmemb * size;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(totalSize);

	if (ptr == NULL)
		return NULL;

	for (i = 0; i < totalSize; i++)
		ptr[i] = 0;

	return ptr;
}
