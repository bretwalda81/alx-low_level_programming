#include "main.h"

/**
* prime_check - checks if n is a prime integer
* @n: the integer
* @m: a factor of n
* Return: the factor
*/
int prime_check(int n, int m)
{
if (m * m == n)
return (0);
if (m * m > n && n > 0)
return (1);
else if (m < 0 || n < 0)
return (0);
return (prime_check(n, m + 1));
}

/**
* is_prime_number - returns 1 for input integer that is a prime number
* @n: the integer
* Return: 1 if prime otherwise 0
*/
int is_prime_number(int n)
{
return (prime_check(n, 0));
}
