#include "holberton.h"

/**
  * string_nconcat - concats n bytes from s2 to s1 in a new allocate space
  *
  * @s1: string to concat to
  * @s2: string to concat from
  * @n: bytes to be concatenated
  *
  * Return: pointer to the new allocated memory space
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1;
	unsigned int len2;
	int totalen;
	int check;
	int loop;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		/*Para cuando acaba len1 apunta al caracter nulo, pero no lo contó*/
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (n >= len2)
		totalen = len1 + len2 + 1;
	else
		totalen = len1 + n + 1;
	ptr = malloc(totalen * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	check = 0;
	for (loop = 0; loop < len1; loop++)
	{
		ptr[check] = s1[loop];
		check++;
	}
	for (loop = 0; check < totalen; loop++)
	{
		ptr[check] = s2[loop];
		check++;
	}
	ptr[check] = '\0';
	return (ptr);
}
