#include "main.h"

/**
* _memset - fills the pointed memory areas with the a constant byte
* @s: char pointer
* @b: the constant byte
* @n: max number of bytes to be filled
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
