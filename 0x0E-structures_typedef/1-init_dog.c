#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure with the provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
