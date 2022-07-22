#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the string
* @needle: the substring
* Return: a pointer to the beginning of the located substring
* or NULL if substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
break;
if (needle[i + j] == '\0')
return (haystack + i);
}
}
return ('\0');
}
