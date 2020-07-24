#include "lists.h"

/**
  * myStartupFun -prints soething before the main
  */
void __attribute__ ((constructor)) liebre(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
