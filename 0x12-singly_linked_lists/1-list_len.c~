#include "lists.h"
#include <stdio.h>

/**
* print_list - print all the elements of a list_t list
* @h: pointer to a list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *hold;
unsigned int i = 0;

hold = h;
while (hold)
{
if (hold->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", hold->len, hold->str);
i++;
hold = hold->next;
}
return (i);
}
