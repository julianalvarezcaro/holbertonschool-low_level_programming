#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
  * struct dog - Attributes of a dog
  * @name: it's name
  * @age: it's age
  * @owner: name of it's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
