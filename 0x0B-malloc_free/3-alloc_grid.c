#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - points to a 2D array of integers
* @width: width of the array
* @height: height of the array
* Return: pointer to the array
*/
int **alloc_grid(int width, int height)
{
int i, j, k;
int **ptr;

if (width < 1 || height < 1)
return (NULL);
ptr = (int **)malloc(sizeof(int *) * height);

if (ptr != NULL)
{
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(sizeof(int) * width);
if (ptr[i] == NULL)
{
for (i--; i >= 0; i--)
free(ptr[i]);
free(ptr);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
ptr[j][k] = 0;
}
return (ptr);
}
else
return (NULL);
}
