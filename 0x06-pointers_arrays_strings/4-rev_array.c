#include "main.h"

/**
* reverse_array - revrses the content of an array of integers
* @a: array
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i = 0;
int b, hold;
b = n - 1;

while (i < b)
{
hold = a[i];
a[i] = a[b];
a[b] = hold;
i++;
b--;
}
}
