#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string
* @accept: the prefix substring
* Return: number of bytes in s matching accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int j;
unsigned int i = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
{
j++;
}
if (accept[j] == '\0')
{
return (i);
}
i++;
}
return (i);
}
