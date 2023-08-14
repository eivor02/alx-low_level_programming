#include "dog.h"
#include <stdlib.h>

/**
 * Free a dog struct.
 *
 * @param d The dog struct to free.
 */
void free_dog(dog_t *d) {
  // Check that the dog struct pointer is not NULL.
  if (d == NULL) {
    return;
  }

  // Free the memory allocated for the name and owner strings.
  free(d->name);
  free(d->owner);

  // Free the memory allocated for the dog struct.
  free(d);
}

