#include "main.h"

/**
* more_numbers - function
* to print the numbers 1 to 14 10 times
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
char x, y;
for (x = 0; x <= 9; x++)
{
int z = 0;
while (z <= 14)
{
if (z < 10)
_putchar(z + '0');
else
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
z++;
}
printf("\n");
}
}
