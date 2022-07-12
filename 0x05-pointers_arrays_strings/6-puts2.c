#include "main.h"

/**
* puts2 - prints every other chracter of a string
* @str: the string
*/
void puts2(char *str)
{
int i;
int j = 0;

while (str[j] != '\0')
{
j++;
}
i = 0;
while (i < j)
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
