#include "holberton.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 *
 * @b: Int to be converted
 *
 * Return: converted number. 0 if one of the chars is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int pow;
	int len;

	if (b == NULL)
	{
		return (0);
	}
	len = 0;
	while (b[len] != '\0')
		len++;
	len--;
	pow = 1;
	while (len >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		else if (b[len] == '1')
		{
			conv += pow;
		}
		pow *= 2;
		len--;
	}
	return (conv);
}
