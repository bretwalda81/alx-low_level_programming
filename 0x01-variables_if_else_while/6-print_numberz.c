#include <stdio.h>

/**
*main - prints single digit numbers in base 10
*Return: Always 0 (Success)
*/
int main(void)
{
int x;

for (x = 48; x < 58; x++)
{
putchar(x);
}
putchar(10);
return (0);
}
