#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - selects the correct fnction to perform operation asked
* @s: operator passed as argument to the program
* Return: pointer to function corresponding to operator
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (i < 5)
{
if (*ops[i].op == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
