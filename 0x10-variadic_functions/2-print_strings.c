#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: No return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	separator = (separator != NULL) ? separator : "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		printf("%s", (str != NULL) ? str : "(nil)");

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
