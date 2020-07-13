#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - a new dog will be born
  *
  * @name: it's name
  * @age: it's age (Benjamin Button)
  * @owner: it's owner
  *
  * Return: pointer to the new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nombre;
	int lenn;
	char *dueno;
	int lend;
	dog_t *firulais;
	dog_t firu;

	firulais = &firu;
	for (lenn = 0; name[lenn] != '\0'; lenn++)
	{
	}
	for (lend = 0; owner[lend] != '\0'; lend++)
	{
	}

	nombre = malloc(lenn * sizeof(char));
	dueno = malloc(lend * sizeof(char));
	if(nombre == 0 || dueno == 0)
		return (0);
	for (; lenn > 0; lenn--)
		nombre[lenn - 1] = name[lenn - 1];
	for (; lend > 0; lend--)
		dueno[lend - 1] = owner[lend - 1];
	firulais->name = nombre;
	firulais->age = age;
	firulais->owner = dueno;
	return(firulais);
}
