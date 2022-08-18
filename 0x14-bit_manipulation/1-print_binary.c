#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number
*/
void print_binary(unsigned long int n)
{
int i = 63;
int run = 0;
unsigned long int num;

while (i >= 0)
{
num = n >> i;

if (num & 1)
{
_putchar('1');
run++;
}
else if (run)
_putchar('0');
i--;
}
if (!run)
_putchar('0');
}
