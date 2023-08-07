#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: size of array
  * @c: char to fill in the array
  *
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *se;

	if (size == 0)
		return (NULL);

	se = malloc(size * sizeof(char));

	if (se == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
	{
		se[r] = c;
	}

	return (se);
}
