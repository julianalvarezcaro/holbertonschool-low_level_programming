#include "dog.h"

/**
  * init_dog - initializes a dog
  *
  * @d: pointer to the struct
  * @name: name
  * @age: age (float)
  * @owner: name of owner
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
