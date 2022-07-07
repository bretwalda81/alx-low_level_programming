#include "main.h"

/**
* print_line - drwas a straight line in the terminal
* @n: the parameter for the number of _ to be printed
*/
void print_line(int n)
{
int a;

for (a = 1; a <= n; a++)
{
if (n > 0)
_putchar('_');
else
_putchar('\n');
}
_putchar('\n');
}
