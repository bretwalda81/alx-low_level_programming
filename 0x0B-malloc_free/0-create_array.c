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
if (size == 0)
return (NULL);
char *s = malloc(sizeof(c) * size);

for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
