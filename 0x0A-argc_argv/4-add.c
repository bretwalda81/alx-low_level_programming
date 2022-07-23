#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: numbers arguments in command line
* @argv: arguments array
* Return: 1 if one of the numbers contains symbols that are not digits,
* otherwis 0
*/
int main(int argc, char *argv[])
{
int i, j;
int k = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
k += atol(argv[i]);
}
printf("%d\n", k);
return (0);
}
