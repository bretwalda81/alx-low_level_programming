#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string to be appended
*
* Return: pointer to newly allocated memory space containing new string
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
 int k, l;
char *s3 = NULL;

if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
s3 = (char *)malloc(sizeof(char) * (i + j) +1);
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
