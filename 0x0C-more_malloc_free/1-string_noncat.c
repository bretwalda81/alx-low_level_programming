#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes of s2
* Return: pointer to concatenated string memory space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0;
int j = 0;
int k, l;
char *s3 = NULL;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

if (j <= n)
n = j;

s3 = malloc(sizeof(char) * (i + n + 1));
if (s3 == NULL)
return (NULL);
else
{
for (k = 0; k < i; k++)
s3[k] = s1[k];
for (l = 0; l < j; k++, l++)
s3[k] = s2[l];
s3[k] = '\0';
return (s3);
}
}
