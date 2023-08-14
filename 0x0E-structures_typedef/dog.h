#ifndef DOG_H
#define DOG_H

/**
 * Typedef for struct dog.
 */
typedef struct dog dog_t;

/**
 * Struct that stores some information of a dog.
 *
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The owner of the dog.
 */
struct dog {
  char *name;
  float age;
  char *owner;
};

/**
 * Create a new dog struct.
 *
 * @param name The name of the dog.
 * @param age The age of the dog.
 * @param owner The owner of the dog.
 *
 * @return A pointer to the new dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * Free the memory allocated for a dog struct.
 *
 * @param d The dog struct to free.
 */
void free_dog(dog_t *d);

/**
 * Print the information about a dog.
 *
 * @param d The dog to print.
 */
void print_dog(dog_t *d);

#endif

