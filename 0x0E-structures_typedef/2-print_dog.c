#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints an structure
  *
  * @d: pointer to the structure
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == 0)
		printf("");;
	if (d->name == 0)
		d->name = "(nil)";
	if (d->owner == 0)
		d->owner = "(nil)";
	if (d->age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
