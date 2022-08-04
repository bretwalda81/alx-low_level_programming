#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers followed by new line
* @seperator: string to be printed between numbers
* @n: number of integers passed to function
* Return: void
*/


void print_numbers(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
int j;
va_list int_input;

va_start(int_input, n);
for (i = 0; i < n; i++)
{
j = va_arg(int_input, int);
printf("%d", j);
if ((i != n - 1) && seperator != NULL)
printf("%s", seperator);
}
va_end(int_input);
printf("\n");
}
