#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot 13
* @c: function parameter
* Return: c
*/
char *rot13(char *c)
{
int i, j;
char orj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotd[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (c[i] == orj[j])
{
c[i] = rotd[j];
break;
}
}
}
return (c);
}
