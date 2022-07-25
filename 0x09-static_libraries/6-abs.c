#include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer
* @r: the parameter for the function
* Return: 0
*/
int _abs(int r)
{
if (r > 0 || r == 0)
{
return (r);
}
else
return (r * -1);
}
