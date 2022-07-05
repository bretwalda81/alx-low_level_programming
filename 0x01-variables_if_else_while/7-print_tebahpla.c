#include <stdio.h>

/**
*main- printa the entire alphabet reversed
*in lower case ending with newline
*Return: Always 0 (Success)
*/
int main(void)
{
int x = 122;

while (x >= 97)
{
putchar(x);
x = x - 1;
}
putchar(10);
return (0);
}
