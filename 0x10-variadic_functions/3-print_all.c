#include "variadic_functions.h"

/**
 * print_all - Prints any combination of characters, integers, floats, and strings.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: No return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char valid_types[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (valid_types[j])
		{
			if (format[i] == valid_types[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			c = 1;
			break;
		case 'i':
			printf("%d
