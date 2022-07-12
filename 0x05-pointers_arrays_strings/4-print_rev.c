#include "main.h"

/**
* _strlen - returns the length of a string
* @ss: the string
* Return: length
*/
int _strlen(char *ss)
{
int i;
for (i = 0; *ss; i++)
ss++;
return (i);
}

/**
* print_rev - prints a string in reverse
* @s:string to be printed
*/
void print_rev(char *s)
{
int i = _strlen(s) - 1;

while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
