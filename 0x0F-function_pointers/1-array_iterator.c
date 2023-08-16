#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element of an integer array.
 * @param array An input integer array.
 * @param size The size of the array.
 * @param action A pointer to the function to be applied.
 *
 * @return No return value.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL) {
        for (size_t i = 0; i < size; i++) {
            action(array[i]);
        }
    }
}
