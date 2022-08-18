#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number
* @index: the index
* Return: the value of the bit at index or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_result;
if (index > 63)
return (-1);
bit_result = (n >> index) & 1;
return (bit_result);
}
