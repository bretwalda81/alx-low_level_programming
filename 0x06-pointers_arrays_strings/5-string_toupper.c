#include "main.h"

/**
* *string_toupper - changes all lowercase of a string to uppercase
* @c: the string
*
* Return: c
*/
char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] -= 32;
}
}
return (c);
}
