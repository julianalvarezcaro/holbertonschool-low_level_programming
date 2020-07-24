#include "lists.h"

/**
  * myStartupFun -prints soething before the main
  */
void myStartupFun(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house u
			pon my back!\n");
}
