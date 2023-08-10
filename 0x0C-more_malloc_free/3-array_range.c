#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * If max < min, the function returns NULL.
 * If malloc fails, the function returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return NULL;

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return NULL;

	for (i = 0; i < size; i++, min++)
		arr[i] = min;

	return arr;
}
