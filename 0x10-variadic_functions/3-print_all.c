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
	unsigned int i = 0;
	char *str;
	const char valid_types[] = "cifs";

	va_start(valist, format);

	while (format && format[i])
	{
		int found_valid_type = 0;

		for (unsigned int j = 0; valid_types[j]; j++)
		{
			if (format[i] == valid_types[j])
			{
				if (i > 0 && format[i - 1])
					printf(", ");
				found_valid_type = 1;
				break;
			}
		}

		if (found_valid_type)
		{
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
					printf("(nil)");
				else
					printf("%s", str);
				break;
			}
		}

		i++;
	}

	printf("\n");
	va_end(valist);
}
