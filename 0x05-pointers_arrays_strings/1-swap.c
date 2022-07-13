#include "main.h"

/**
* swap_int - swaps two integers
* @a: first integer
* @b: second integer
*/
void swap_int(int *a, int *b)
{
int hold;
hold = *a;
*a = *b;
*b = hold;
}
