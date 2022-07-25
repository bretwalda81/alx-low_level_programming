#include "main.h"
#include <stdlib.h>

/**
* _strdup - copies given string to a new allocated space in memory
* @str: the string parameter
* Return: a pointer to the newly allocated space
*/
char *_strdup(char *str)
{
int i = 0;
int j;
int k = 0;

char *dest = NULL;
while (str[k] != '\0')
{
i++;
k++;
}
dest = malloc(sizeof(char) * (i + 1));
if (str == NULL)
return (NULL);
if (dest != NULL)
{
for (j = 0; j <= i; j++)
dest[j] = str[j];
return (dest);
}
else
return (NULL);
}
