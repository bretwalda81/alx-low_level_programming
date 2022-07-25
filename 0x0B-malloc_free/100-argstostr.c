#include <unistd.h>
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of my program
* @ac: number of arguments
* @av: argument array
* Return: pointer to a new string
*/
char *argstostr(int ac, char **av)
{
char *s;
int i, j, k = 0;

if ((ac == 0) || (av == NULL))
return (NULL);
}
