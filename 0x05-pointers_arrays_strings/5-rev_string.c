#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
char c;
int i;
int rev = 0;

while (s[rev] != '\0')
rev++;
for (i = 0; i < (rev / 2); i++)
{
c = s[i];
s[i] = s[rev - i - 1];
s[rev - i - 1] = c;
}
}
