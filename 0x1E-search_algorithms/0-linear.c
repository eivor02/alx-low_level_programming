#include <stdio.h>

/**
 * linear_search - finds a value by checking one-by-one
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; (unsigned int)i < size; i++, array++)
	{
		printf("Value checked array[%i] = [%i]\n", i, *array);
		if (*array == value)
		{
			return (i);
		}
	}

	return (-1);
}
