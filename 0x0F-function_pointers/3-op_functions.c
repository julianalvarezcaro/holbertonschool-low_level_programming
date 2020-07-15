#include "3-calc.h"

/**
  * op_add - adds two numbers
  *
  * @a: int
  * @b: int
  *
  * Return: int, result
  */
int op_add(int a, int b)
{
	return (a + b);
}
 /**
   * op_sub - substracts two numbers
   *
   * @a: int
   * @b: int
   *
   * Return: int, result
   */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two numbers
  *
  * @a: int
  * @b: int
  *
  * Return: int, result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two numbers
  *
  * @a: int
  * @b: int
  *
  * Return: int, result
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - gets the module of a number
  *
  * @a: int to get the module from
  * @b: int, module to get
  *
  * Return: int, result
  */
int op_mod(int a, int b)
{
	return (a % b);
}
