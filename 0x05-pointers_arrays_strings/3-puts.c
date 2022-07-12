#include "main.h"

/**
* _puts - prints a string
* @str: string to be printed
*/
void _puts(char *str)
{
int i;
char *ptr_str = str;
for (i = 0; *ptr_str; i++)
_putchar(*(ptr_str + i));
}
