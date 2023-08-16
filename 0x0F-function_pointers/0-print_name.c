#include "function_pointers.h"

/**

print_name - Prints a name using a function pointer.
@name: The input name.
@f: The function pointer to the printing function.
Return: None.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
