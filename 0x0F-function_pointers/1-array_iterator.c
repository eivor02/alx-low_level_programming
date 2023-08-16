#include "function_pointers.h"

/**

array_iterator - Applies a function to each element of an integer array.

@param array An input integer array.
@param size The size of the array.
@param action A pointer to the function to be applied.

@return No return value.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    // Avoid using magic numbers and use a named constant instead
    static const unsigned int MAX_ITERATIONS = size;

    // Use a for loop instead of a while loop
    for (unsigned int i = 0; i < MAX_ITERATIONS; i++) {
        action(array[i]);
    }
}
