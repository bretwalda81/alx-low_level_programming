#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string
* @accept: the set of bytes to search
* Return: a pointer to the byte in s matching accept
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
while (*s != '\0')
{
for (i = 0; accept[i] != 0; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
