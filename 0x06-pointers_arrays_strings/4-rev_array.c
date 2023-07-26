#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: int type for size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int s;

	i = 0;
	while (i < n)
	{
		n--;
		s = a[i];
		a[i] = a[n];
		a[n] = s;
		i++;
	}
}

