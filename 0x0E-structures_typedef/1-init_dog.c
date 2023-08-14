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

  // Set the dog's name, age, and owner.
  d->name = name;
  d->age = age;
  d->owner = owner;
}

