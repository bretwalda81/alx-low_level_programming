#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @c: the digit that is the function parameter
* Return: 1 if it is a digit.
* Otherwise 0 is returned.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}
