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

/**
 * exponential_search - finds a value by multiplying the checking index
 * by two every iteration
 * @array: array to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i;
	int result;

	if (array == NULL)
	{
		return (-1);
	}

	if (*array == value)
	{
		return (0);
	}

	for (i = 1; i < size; i <<= 1)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		if (array[i] >= value)
		{
			break;
		}
	}

	i >>= 1;

	if (i << 1 >= size)
	{
		printf("Value found between indexes [%u] and [%u]\n",
			i, (unsigned int)size - 1);

		result = binary_search(array + i, size - i, value);
	}
	else
	{
		printf("Value found between indexes [%u] and [%u]\n", i, i << 1);

		result = binary_search(array + i, i + 1, value);
	}

	if (result != -1)
	{
		return (result + i);
	}

	return (-1);
}
