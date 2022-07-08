#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n:  the parameter for the number of line to be printed
*/
void print_diagonal(int n)
{
int a, b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 1; b <= 1; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
