#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n:  the parameter for the number of line to be printed
*/
void print_diagonal(int n)
{
int a, b, c;

for (a = 1; a <= n; a++)
{
if (n > 0)
{
for (b = 1; b < n; b++)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
else
_putchar('\n');
}
return (0);
}
