#include "holberton.h"
#include <stdio.h>
/**
  * is_palindrome - calls auxiliar functions that check if s is a palindrome
  *
  * @s: pointer to the string to be checked
  *
  * Return: 1 is a palindrome. 0 otherwise
  */
int is_palindrome(char *s)
{
	char *ptr;

	ptr = last_pal(s);
	return (comp_pal(s, ptr));
}

/**
  * last_pal - makes ptr point to the end of the string
  *
  * @s: pointer to the string to be reversed
  *
  * Return: pointer to the end string
  */
char *last_pal(char *s)
{
	if (*s != '\0')
	{
		return (last_pal(++s));
	}
	else
		return (--s);

}

/**
  * comp_pal - compares 2 string and checks if is a palindrome
  *
  * @s: begining of string
  * @ptr: end of string
  *
  * Return: 1 if equal. 0 otherwise
  */
int comp_pal(char *s, char *ptr)
{
	if (*s == '\0')
		return (1);
	else if (*s == *ptr)
		return (comp_pal(++s, --ptr));
	else
		return (0);
}
