#include "holberton.h"

/**
  * leet - encodes to 1337
  *
  * @s: string to encode
  *
  * Return: pointer to the string
  */
char *leet(char *s)
{
	int len;
	int select;
	int replacement;
	char lett[10] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char reem[5] = {'4', '3', '1', '0', '7'};

	for (len = 0; s[len] != '\0'; len++)
	{
		for (select = 0; select < 10; select++)
		{
			if (s[len] == lett[select])
			{
				replacement = select / 2;
				s[len] = reem[replacement];
			}
		}
	}
	return (s);
}
