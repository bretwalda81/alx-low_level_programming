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
if (i == 0)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}
continue;
}
for (j = 0; seperators[j] != 0; j++)
{
if (c[i] == seperators[j])
{
++i;
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
continue;
}
}
}
}
return (c);
}
