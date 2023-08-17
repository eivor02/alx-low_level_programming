#include <stdarg.h>
#include <stdio.h>

void print_all(const char *format, ...) {
    // Create a va_list to store the arguments
    va_list valist;

    // Initialize the va_list with the format string and arguments
    va_start(valist, format);

    // Iterate over the format string
    for (size_t i = 0; i < strlen(format); i++) {
        // Get the current character and its type
        char c = format[i];
        int type = _Generic(c, char: 1, int: 2, double: 3, const char *: 4);

        // Handle the different types of arguments
        switch (type) {
            case 1:
                // Print a character argument
                printf("%c", va_arg(valist, int));
                break;
            case 2:
                // Print an integer argument
                printf("%d", va_arg(valist, int));
                break;
            case 3:
                // Print a double argument
                printf("%f", va_arg(valist, double));
                break;
            case 4:
                // Print a string argument
                const char *str = va_arg(valist, const char *);
                printf("%s", str);
                break;
        }
    }

    // Print a newline at the end
    printf("\n");

    // Clean up the va_list
    va_end(valist);
}
