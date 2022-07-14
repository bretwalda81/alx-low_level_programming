#include "main.h"

/**
* *leet - encodes a string into 1337
* @c: the string
*
* Return: c
*/
char *leet(char *c)
{
int i, j;
char d[] = "ol_ea__t";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; d[j] != '\0'; j++)
{
if (c[i] == d[j] || (c[i] == d[j] - 32))
{
c[i] = j + '0';
}
}
}
return (c);
}
