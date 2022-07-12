#include "main.h"
/**
* *_strcpy - copies a string
* @src: string to be copied
* @dest: copy location
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
char *c = dest;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (c);
}
