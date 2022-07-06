#include <stdio.h>

/**
* main - prints the first 50 fibonacci numbers starting with 1 and 2
* Return: Always 0 (Sucess)
*/
int main(void)
{
long int w, x, y, z;
x = 1;
y = 2;

for (w = 1; w <= 50; w++)
{
if (x < 20365011074)
{
printf("%ld, ", x);
}
else
{
  printf("%ld\n", x);
}
z = x + y;
x = y;
y = z;
}
return (0);
}
