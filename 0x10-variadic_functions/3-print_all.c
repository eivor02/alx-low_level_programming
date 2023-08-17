#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * @args: arguments to be printed.
 *
 * Return: no return.
 */
void print_all(const char * const format, va_list args) {
  int i = 0;
  /* Iterate over the format string */
  while (format[i]) {
    switch (format[i]) {
      case 'c':
        /* Print a character */
        printf("%c", va_arg(args, int));
        break;
      case 'i':
        /* Print an integer */
        printf("%d", va_arg(args, int));
        break;
      case 'f':
        /* Print a floating-point number */
        printf("%f", va_arg(args, double));
        break;
      case 's':
        /* Print a string */
        printf("%s", va_arg(args, char *));
        break;
    }
    i++;
    /* Print a comma if there are more arguments to print */
    if (format[i]) {
      printf(", ");
    }
  }
  printf("\n");
}

int main() {
  /* Print a character, an integer, a floating-point number, and a string */
  print_all("cis", 'a', 123, 3.14159, "hello");
  return 0;
}
