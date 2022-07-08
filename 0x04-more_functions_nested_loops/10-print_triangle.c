#include "main.h"

/**
* print_triangle - draws a triangle
* @size: the parameter for the number of # to be printed
*/
void print_triangle(int size)
{
int a, b, c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = size; b >= a; b--)
{
_putchar(' ');
}
for (c = 0; c < a + 1; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
