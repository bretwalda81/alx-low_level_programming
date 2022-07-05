#include <stdio.h>

/**
*main - print all alphabets in lower case exempting two letters
*Return: Always 0 (Success)
*/
int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
putchar(x);
}
putchar('\n');
return (0);
}
