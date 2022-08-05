#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of arguments passed to the function
* Return: void
*/

void print_all(const char * const format, ...)
{
int i = 0;
va_list argument_input;
char *ptr_array = NULL;
char *seperator = ", ";
va_start(argument_input, format);

while (format[i] && format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(argument_input, int));
break;
case 'i':
printf("%d", va_arg(argument_input, int));
break;
case 'f':
printf("%f", va_arg(argument_input, double));
break;
case 's':
ptr_array = va_arg(argument_input, char *);
if (ptr_array == NULL)
ptr_array = "(nil)";
printf("%s", ptr_array);
break;
default:
i++;
continue;
}
if (format[i + 1] != '\0')
printf("%s", seperator);
i++;
}
printf("\n");
va_end(argument_input);
}
