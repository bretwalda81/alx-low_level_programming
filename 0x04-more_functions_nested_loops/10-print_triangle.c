#include "main.h"

/**
* print_triangle - draws a triangle
* @size: the parameter for the number of # to be printed
*/
void print_triangle(int size)
{
int a, b;

for (a = 1; a <= size; a++)
{
for (b = size; b >= 1; b--)
{
if (b <= 1)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
