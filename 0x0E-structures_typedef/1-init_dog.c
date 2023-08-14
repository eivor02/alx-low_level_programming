#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    if (name != NULL)
    {
        int name_length = strlen(name) + 1;
        d->name = malloc(name_length * sizeof(char));
        if (d->name != NULL)
            strcpy(d->name, name);
    }

    d->age = age;

    if (owner != NULL)
    {
        int owner_length = strlen(owner) + 1;
        d->owner = malloc(owner_length * sizeof(char));
        if (d->owner != NULL)
            strcpy(d->owner, owner);
    }
}
