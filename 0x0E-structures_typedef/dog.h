#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure that stores information about a dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Description: This structure represents a dog and stores its name,
 * age, and the name of its owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - Initializes a dog structure with the provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the information about a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Return: void
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure and initializes it with the provided values.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 *
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Return: void
 */
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
