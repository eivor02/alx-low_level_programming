#include "function_pointers.h"

/**
 * Executes a function on each element of an array.
 *
 * @param array The input array.
 * @param size The size of the array.
 * @param action A function pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int)) {
    for (size_t i = 0; i < size; i++) {
        action(array[i]);
    }
}
