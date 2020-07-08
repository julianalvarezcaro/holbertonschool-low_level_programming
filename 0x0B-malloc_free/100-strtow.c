#include "holberton.h"

/**
  * strtow - Splits string into words
  *
  * @str: String to me split
  *
  * Return: Pointer to and array of strings
  */
char **strtow(char *str)
{
	int control;
	int loop;
	int total;
	char **ptr;

	control = 0;
	for (loop = 0; str[loop] != '\0'; loop++)
	{
		if (control)
		{
			if (str[loop] != 32)
			{
				total++;
				control = 0;
			}
		}
		else if (str[loop] == 32)
		{
			control = 1;
		}
		else
		{
			total++;
		}
	}
	printf("Deberia ser 25, dio: %d", total);
	ptr = malloc();
	
}
