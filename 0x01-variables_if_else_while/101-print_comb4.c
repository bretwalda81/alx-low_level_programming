#include <stdio.h>

/**
*main - prints all possible combos of two digits
*Return: Always 0 (Success)
*/
int main(void)
{
int x, y, z;

for (x = 0; x < 10; x++)
{
for (y = 1; y < 10; y++)
{
for (z = 2; z < 10; z++)
{
if (y > x && y < z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
}
if (y > x && y < z && x != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
