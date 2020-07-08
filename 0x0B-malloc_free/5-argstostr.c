#include "holberton.h"
#include "stdio.h"

/**
  * argstostr - concatenates all the arguments of the program
  *
  * @ac: Number of args
  * @av: Array of pointers to the args
  *
  * Return: Pointer to the new string or NULL if failed
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int argc;
	int argv;
	int total;
	int check;

	if (ac == 0 || av == NULL)
		return (NULL);
	total = 0;
	for (argc = 0; argc < ac; argc++)
	{
		for (argv = 0; av[argc][argv] != '\0'; argv++)
		{
			total++;
		}
		total++;
	}
	str = malloc(total * sizeof(char));
	if (str == NULL)
		return (NULL);
	check = 0;
	for (argc = 0; argc < ac; argc++)
	{
		for (argv = 0; av[argc][argv] != '\0'; argv++)
		{
			str[check] = av[argc][argv];
			check++;
		}
		str[check] = '\n';
		check++;
	}
	return (str);
}
