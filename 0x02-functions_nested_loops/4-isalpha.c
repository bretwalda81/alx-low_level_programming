#include "main.h"

/**
* _isalpha - checks for an alphabetic character
* @c: the integer that is the function parameter
* Return: 1 if c is a letter.
* Otherwise, 0 is returned
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
