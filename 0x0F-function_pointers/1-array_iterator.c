#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @array: Input integer array.
 * @size: Size of the array.
 * @action: Pointer to the function.
 *
 * Return: No return value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    if (array && action)
    {
        /* Process 4 elements per iteration (assuming the array size is divisible by 4) */
        for (i = 0; i < size - 3; i += 4)
        {
            action(array[i]);         /* Process element 1 */
            action(array[i + 1]);     /* Process element 2 */
            action(array[i + 2]);     /* Process element 3 */
            action(array[i + 3]);     /* Process element 4 */
        }

        /* Process the remaining elements */
        for (; i < size; i++)
            action(array[i]);
    }
}
