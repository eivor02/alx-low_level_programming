#include "main.h"
/**
* swap_int - Swaps the values of two integers.
* @a: the first int
* @b: the second int
* Return 0
*/

void swap_int(int *a, int *b)
{
	int s;

	 s = *a;
	*a = *b;
	*b = s;

