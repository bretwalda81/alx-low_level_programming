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
if
(c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',' || c[i] == ';' ||
c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == '\"' || c[i] == '(' ||
c [i] == '}' || c[i] == '{' || c[i] == '}')
{
++i;
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
continue;
}
}
}
return (c);
}
