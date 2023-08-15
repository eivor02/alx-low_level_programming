#ifndef DOG_H
#define DOG_H

/**
 * A dog struct.
 */
struct dog {
  char *name;
  float age;
  char *owner;
};

/**
 * Creates a new dog struct.
 *
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The owner of the dog.
 *
 * @return A pointer to the new dog struct, or NULL if an error occurred.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * Frees a dog struct.
 *
 * @param d The dog struct to free.
 */
void free_dog(dog_t *d);

#endif

