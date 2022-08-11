#include "lists.h"
#include <stdio.h>

/**
* print - prints a string before main function is executed
*/
void print(void) __attribute__ ((constructor));
void print(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
