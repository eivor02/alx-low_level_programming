#include "function_pointers.h"

/**

array_iterator - Executes a function on each element of an array.
@array: The input integer array.
@size: The size of the array.
@action: A pointer to the function to be executed.
Return: None.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
}
