#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for a function using calloc
* @nmemb: number of array elements
* @size: byte size of each element
* Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
