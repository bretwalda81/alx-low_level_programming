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
int i, j;
int **ptr = NULL;

if (width < 1 || height < 1)
return (NULL);
ptr = (int **)malloc(sizeof(int) * width * height);
for (i = 0; i < height * width; i++)
{
}
return (ptr);
}
