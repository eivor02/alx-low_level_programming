#include <stdlib.h>
#include <string.h>

typedef struct dog {
  char *name;
  float age;
  char *owner;
} dog_t;

/**
 * Initialize a dog struct.
 *
 * @param d The dog struct to initialize.
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The owner of the dog.
 */
void init_dog(dog_t *d, char *name, float age, char *owner) {
  // Check that the dog struct pointer is not NULL.
  if (d == NULL) {
    return;
  }

  // Check that the name, age, and owner pointers are not NULL.
  if (name == NULL || age == NULL || owner == NULL) {
    free(d);
    return;
  }

  // Allocate memory for the name, age, and owner strings.
  d->name = malloc(strlen(name) + 1);
  d->age = malloc(sizeof(float));
  d->owner = malloc(strlen(owner) + 1);

  // Copy the name, age, and owner strings into the dog struct.
  strcpy(d->name, name);
  *d->age = age;
  strcpy(d->owner, owner);
}

/**
 * Free a dog struct.
 *
 * @param d The dog struct to free.
 */
void free_dog(dog_t *d) {
  // Free the memory allocated for the name, age, and owner strings.
  free(d->name);
  free(d->age);
  free(d->owner);

  // Free the memory allocated for the dog struct.
  free(d);
}

