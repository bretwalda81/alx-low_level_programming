#include "main.h"

/**
* _puts - prints a string
* @str: string to be printed
*/
void _puts(char *str)
{
char *ptr_str = str;

while (*ptr_str != '\0')
{
_putchar(*ptr_str);
ptr_str++;
}
_putchar('\n');
}
