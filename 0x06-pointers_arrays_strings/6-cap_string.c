#include "main.h"

/**
* *cap_string - capitalizes all words of a string
* @c: the string
*
* Return: c
*/
char *cap_string(char *c)
{
int i, j;
char seperators[] = " \t\n,;.!?\"(){}";

for (i = 0; c[i] != '\0'; i++)
{
if (c[0] >= 'a' && c[0] <= 'z')
c[0] = c[0] - 32;
for (j = 0; seperators != '\0'; j++)
{
if (c[i] == seperators[j])
{
++i;
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i + 1] = c[i + 1] - 32;
}
}
}
}
return (c);
}
