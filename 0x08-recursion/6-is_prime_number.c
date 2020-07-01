#include "holberton.h"

/**
  * is_prime_number - checks if n is a prime number
  *
  * @n: int to be checked
  *
  * Return: 1 if prime. 0 otherwise
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_aux(n, 2));
}

int prime_aux(int n, int check)
{
	if (check >= n / 2)
		return (1);
	else if (n % check == 0)
		return (0);
	else
		return (prime_aux(n, ++check));
}
