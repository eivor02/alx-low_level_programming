#ifndef DOG_H
#define DOG_H

typedef struct dog {
  char *name;
  float age;
  char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
  dog_t *d = malloc(sizeof(dog_t));
  d->name = name;
  d->age = age;
  d->owner = owner;
  return d;
}

void free_dog(dog_t *d) {
  free(d->name);
  free(d->owner);
  free(d);
}

void print_dog(dog_t *d) {
  printf("Name: %s\n", d->name);
  printf("Age: %.2f\n", d->age);
  printf("Owner: %s\n", d->owner);
}

#endif

