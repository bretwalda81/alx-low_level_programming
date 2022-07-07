#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n:  the parameter for the number of line to be printed
*/
void print_diagonal(int n)
{
int a, b;

for (a = 1; a <= n; a++)
{
for (b = 1; b <= 1; b++)
{
if (a == b)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
if (n <= 0)
{
_putchar ('\n');
}
}
}
