#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array of integers
* @min: leaset value in array (included)
* @max: highest value (icnluded)
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
int i, j;
int *ptr;
if (min > max)
return (NULL);
j = max - min + 1;
ptr = malloc(sizeof(int) * j);

if (ptr == NULL)
return (NULL);

for (i = 0; i < j; i++, min++)
ptr[i] = min;
return (ptr);
}
