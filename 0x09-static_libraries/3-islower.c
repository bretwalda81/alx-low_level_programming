#include "main.h"

/**
* _islower - checks for lowercase character
* @c: the integer that is the function parameter
* Return: 1 if lowercase.
* Otherwise 0 is returned.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
