#include "holberton.h"

/**
  * str_concat - concatenates two string
  *
  * @s1: pointer to the first string
  * @s2: pointer to the second string
  *
  * Return: Pointer to memory in which the string were concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int safe;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	len2++;
	conc = (char *) malloc((len1 + len2) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	safe = len1;
	for (; len1 >= 0; len1--)
	{
		conc[len1] = s1[len1];
	}
	for (; len2 >= 0; len2--)
	{
		conc[safe + len2] = s2[len2];
	}
	return (conc);
}
