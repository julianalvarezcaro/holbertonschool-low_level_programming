#include "holberton.h"

/**
  * is_prime_number - calls aux function
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

/**
  * prime_aux - check if an int is a prime number
  *
  * @n: int ot be checked
  * @check: possible value that could be a divisor
  *
  * Return: 1 if prime. 0 otherwise
  */
int prime_aux(int n, int check)
{
	if (check >= n / 2)
		return (1);
	else if (n % check == 0)
		return (0);
	else
		return (prime_aux(n, ++check));
}
