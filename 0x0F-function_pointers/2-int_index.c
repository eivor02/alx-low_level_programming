#include "function_pointers.h"

/**
 * Finds the index of the first element in the array that satisfies the given condition.
 *
 * @param array The array to search.
 * @param size The size of the array.
 * @param cmp A function pointer to the comparison function.
 *
 * @return The index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int)) {
    for (int i = 0; i < size; i++) {
        if (cmp(array[i])) {
            return i;
        }
    }
    return -1;
}
