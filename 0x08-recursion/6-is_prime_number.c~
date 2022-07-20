#include "main.h"

/**
* perfect_sqr - checks if n is a perfect square
* @n: the integer
* @m: perfect root
* Return: the root
*/
int perfect_sqr(int n, int m)
{
if (m * m == n)
return (m);
if (m * m > n)
return (-1);
return (perfect_sqr(n, m + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the integer
* Return: the root
*/
int _sqrt_recursion(int n)
{
return (perfect_sqr(n, 0));
}
