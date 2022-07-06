#include <stdio.h>

/**
* main - finds and prints the first 98 fibonacci numbers
* Return: Always 0 (Sucess)
*/
int main(void)
{
unsigned long int a, b, c, b_quotient, b_modulus, c_quotient, c_modulus;
b = 1;
c = 2;

printf("%lu", b);
 
for (a = 1; a < 94; a++)
{
printf(", %lu", c);
c = c + b;
b = c - b;
}
b_quotient = b / 1000000000;
b_modulus = b % 1000000000;
c_quotient = c / 1000000000;
c_modulus = c % 1000000000;
for (a = 94; a < 99; a++)
{
printf(", %lu", c_quotient + (c_modulus / 1000000000));
printf("%lu", c_modulus % 1000000000);
c_quotient = c_quotient + b_quotient;
b_quotient = c_quotient - b_quotient;
c_modulus = c_modulus + b_modulus;
b_modulus = c_modulus - b_modulus;
}
printf("\n");
return (0);
}
