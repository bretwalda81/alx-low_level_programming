#include <stdio.h>

/**
*main- printa the entire alphabet
*in lower case ending with newline
*Return: Always 0 (Success)
*/
int main(void)
{
int x = 97;

while (x <= 122)
{
putchar(x);
x = ++x;
}
putchar(10);
return (0);
}
