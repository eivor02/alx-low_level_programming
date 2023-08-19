#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char.
 * @arg: A va_list containing the character argument.
 */
void print_char(va_list arg)
{
	char letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @arg: A va_list containing the integer argument.
 */
void print_int(va_list arg)
{
	int num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @arg: A va_list containing the float argument.
 */
void print_float(va_list arg)
{
	float num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @arg: A va_list containing the string argument.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *funcs[j].symbol)
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
