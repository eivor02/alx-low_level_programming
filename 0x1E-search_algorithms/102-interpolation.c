#include <stdio.h>

/**
 * interpolation_search - finds a value by estimating where the value should be
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));

	while (1)
	{

		if (pos >= size)
		{
			printf("Value checked array[%u] is out of range\n", (unsigned int)pos);
			return (-1);
		}

		printf("Value checked array[%u] = [%i]\n", (unsigned int)pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] > value)
		{
			high = pos - 1;
		}

		else
		{
			low = pos + 1;
		}

		if (high <= low)
		{
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	}

	return (-1);
}
