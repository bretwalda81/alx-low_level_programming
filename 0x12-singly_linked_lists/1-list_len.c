#include "lists.h"

/**
* list_len - calculate number of elements in a linked list
* @h: pointer to a list
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
const list_t *hold;
unsigned int i = 0;

hold = h;
while (hold)
{
i++;
hold = hold->next;
}
return (i);
}
