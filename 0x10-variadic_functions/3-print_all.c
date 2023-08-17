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
	unsigned int i = 0, j;
	char *str;
	const char valid_types[] = "cifs";

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;
		while (valid_types[j])
		{
			if (format[i] == valid_types[j])
			{
				if (i > 0)
					printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				str = va_arg(valist, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}

		i++;
	}

	printf("\n");
	va_end(valist);
}
