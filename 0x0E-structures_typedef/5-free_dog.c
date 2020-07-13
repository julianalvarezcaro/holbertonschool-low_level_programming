#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - sets a dog free
  *
  * @d: pointer to a dog
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
