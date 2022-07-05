#include <stdio.h>

/**
*main- printa the entire alphabet
*in lower case ending with newline
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
x = 0;

while (x <= 9)
{
putchar(x);
x = x + 1;
}
x = 97;

while (x <= 102)
{
putchar(x);
x = x + 1;
}
putchar(10);
return (0);
}
