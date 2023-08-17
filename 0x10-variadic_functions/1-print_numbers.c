#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: No return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(valist, int), separator);
		else
			printf("%d", va_arg(valist, int));
	}

	printf("\n");
	va_end(valist);
}
