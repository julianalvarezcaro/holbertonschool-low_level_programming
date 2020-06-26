#include "holberton.h"

/**
  * cap_string - Capitalizes all words of a strin
  *
  * @s: pointer to the string
  *
  * Return: pointer to the string
  */
char *cap_string(char *s)
{
	int cap;
	int len;
	char sep[13] = {'\t', '\n', ' ', '!', '"', '(', ')',
		',', '.', ';', '?', '{', '}'};
	int countSep;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (countSep = 0; countSep < 13; countSep++)
		{
			if (s[len] == sep[countSep])
			{
				cap = 1;
				break;
			}
		}
		if (len == 0)
		{
			if (s[len] >= 97 && s[len] <= 122)
				s[len] -= 32;
		}
		else if (s[len] >= 97 && s[len] <= 122)
		{
			if (cap)
			{
				s[len] -= 32;
				cap = 0;
			}
		}
		else if (s[len] >= 65 && s[len] <= 90)
			cap = 0;
		else if (s[len] != sep[countSep])
			cap = 0;

	}
	return (s);
}
