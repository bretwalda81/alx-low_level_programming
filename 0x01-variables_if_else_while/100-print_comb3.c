#include <stdio.h>

/**
*main - prints all possible combos of two digits
*Return: Always 0 (Success)
*/
int main(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 1; y < 10; y++)
{
if (y != x && y > x)
{
putchar(x + '0');
putchar(y + '0');
}
if (y > x && x != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
