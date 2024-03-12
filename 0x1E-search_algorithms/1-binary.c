#include <stdio.h>

/**
 * print_array - prints an array
 * @array: array to print
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
	unsigned int i;

	for (i = 0; i < size - 1; i++, array++)
	{
		printf("%i, ", *array);
	}

	printf("%i\n", *array);
}

/**
 * binary_search - finds a value by checking value at middle of array
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid;
	int result;

	if (array == NULL)
	{
		return (-1);
	}
	if (size == 0)
	{
		return (-1);
	}

	printf("Searching in array: ");
	print_array(array, size);

	if (size == 1 && *array != value)
	{
		return (-1);
	}

	mid = (size - 1) / 2;

	if (*(array + mid) == value)
	{
		return (mid);
	}
	if (*(array + mid) > value)
	{
		return (binary_search(array, mid, value));
	}
	if (*(array + mid) < value)
	{
		result = binary_search(array + mid + 1, size - 1 - mid, value);
		if (result == -1)
		{
			return (-1);
		}
		return (result + mid + 1);
	}

	return (-1);
}
