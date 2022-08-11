#include <stdio.h>

/**
* main - prints the name of the file that it was compiled from
* @void: nothing
* Return: 0 if successful
*/
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
