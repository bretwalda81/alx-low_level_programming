#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars
* @size: size of array
* @c: the character in the array
* Return: a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (size == 0)
return (NULL);
else
{
s = malloc(sizeof(c) * size);

if (s != NULL)
{
for (i = 0; i < size; i++)
s[i] = c;
}
else
return (NULL);
return (s);
}
}
