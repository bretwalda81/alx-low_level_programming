#include "main.h"

/**
* print_number - prints an integer
* @n: the integer to be printed
*/
void print_number(int n)
{
unsigned int b, c, n1, rnk, val;
rnk = 1;
c = 1;

if (n < 0)
{
_putchar('-');
n = -n;
}
n1 = n;
while (n1 > 9)
{
n1 = n1 / 10;
c++;
rnk = rnk * 10;
}
for (b = 0; b < c; b++)
{
val = n / rnk;
n = n % rnk;
rnk = rnk / 10;
_putchar (val + '0');
}
}
