#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: the string
*
* Return: integer
*/
int _atoi(char *s)
{
int i = 0;
unsigned int j = 0;
int minus = 1;
int plus = 0;

while (s[i])
{
if (s[i] == 45)
{
minus *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
plus = 1;
j = (j * 10) + (s[i] - '0');
i++;
}
if (plus == 1)
{
break;
}
i++;
}
j *= minus;
return (j);
}
