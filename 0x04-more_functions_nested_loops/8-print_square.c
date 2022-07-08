#include "main.h"

/**
* print_square - prints a square
* @size: the parameter for the number of # to be printed
*/
void print_square(int size)
{
int a, b;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
