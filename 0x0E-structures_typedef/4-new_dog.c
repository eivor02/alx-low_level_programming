#include "dog.h"
#include <stdlib.h>

/**
 * Create a new dog struct.
 *
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The owner of the dog.
 *
 * @return A pointer to the new dog struct, or NULL if an error occurred.
 */
dog_t *new_dog(char *name, float age, char *owner) {
  // Allocate memory for the new dog struct.
  dog_t *p_dog = malloc(sizeof(dog_t));
  if (p_dog == NULL) {
    return NULL;
  }

  // Check that the name and owner strings are not NULL.
  if (name == NULL || owner == NULL) {
    // The name and/or owner strings are NULL, so free the dog struct and return NULL.
    free(p_dog);
    return NULL;
  }

  // Get the lengths of the name and owner strings.
  int lname = strlen(name);
  int lowner = strlen(owner);

  // Allocate memory for the name and owner strings.
  p_dog->name = malloc(lname + 1);
  p_dog->owner = malloc(lowner + 1);
  if (p_dog->name == NULL || p_dog->owner == NULL) {
    // One or both of the strings could not be allocated, so free the dog struct and return NULL.
    free(p_dog->owner);
    free(p_dog->name);
    free(p_dog);
    return NULL;
  }

  // Copy the name and owner strings into the dog struct.
  strncpy(p_dog->name, name, lname + 1);
  strncpy(p_dog->owner, owner, lowner + 1);

  // Set the dog's age.
  p_dog->age = age;

  // Return the new dog struct.
  return p_dog;
}
