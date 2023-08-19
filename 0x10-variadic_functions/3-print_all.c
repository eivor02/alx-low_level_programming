#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints arguments based on the format string.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: The format string specifies the types of arguments
 *              to be printed: 'c' for char, 'i' for integer,
 *              'f' for float, and 's' for char*.
 *              If a string argument is NULL, it prints (nil) instead.
 *              Any other character in the format string is ignored.
 *              Prints a new line at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;

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
			str = va_arg(args, char *);
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
