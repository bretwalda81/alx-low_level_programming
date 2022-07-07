#include "main.h"

/**
* print_triangle - draws a triangle
* @size: the parameter for the number of # to be printed
*/
void print_triangle(int size)
{
int a, b, c;

for (a = 1; a <= size; a++)
{
if (size > 0)
{
for (b = 1; b <= size - a; b++)
{
_putchar(' ');
}
for (c = 1; c <= a; c++)
{
_putchar('#');
}
_putchar('\n');
}
else
_putchar('\n');
}
return (0);
}
