#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints a formatted list of arguments
 * @format: The format string specifying the types of arguments
 *
 * Description: This function takes a format string and a variable number
 *              of arguments of different types (char, int, float, char*),
 *              and prints them accordingly. The format string consists of
 *              characters representing the argument types: 'c' for char,
 *              'i' for int, 'f' for float, and 's' for char*. If a string
 *              argument is NULL, it is printed as "(nil)". The arguments
 *              are separated by commas, and a newline is printed at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
