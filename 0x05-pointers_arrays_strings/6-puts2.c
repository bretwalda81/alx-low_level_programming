#include "main.h"

/**
* puts2 - prints every other chracter of a string
* @str: the string
*/
void puts2(char *str)
{
int i;
for (i = 0; *str; i += 2)
_putchar(*(str + i));
}
