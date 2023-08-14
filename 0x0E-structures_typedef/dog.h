#ifndef DOG_H
#define DOG_H

// Typedef for struct dog
typedef struct dog dog_t;

// Struct that stores information about a dog
struct dog {
char *name; // Name of the dog
float age; // Age of the dog
char *owner; // Owner of the dog
};

/**

Initializes a dog structure with the given values.
@param d Pointer to the dog structure.
@param name Name of the dog.
@param age Age of the dog.
@param owner Owner of the dog.
*/
void init_dog(dog_t *d, char *name, float age, char *owner);
/**

Prints the information of a dog.
@param d Pointer to the dog structure.
*/
void print_dog(const dog_t *d);
/**

Creates a new dog structure with the given values.
@param name Name of the dog.
@param age Age of the dog.
@param owner Owner of the dog.
@return Pointer to the newly created dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner);
/**

Frees the memory allocated for a dog structure.
@param d Pointer to the dog structure to free.
*/
void free_dog(dog_t *d);
