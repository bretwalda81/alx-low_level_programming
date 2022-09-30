#include "lists.h"

/**
* dlistint_len - Function that counts the number of elements
* @h: The passed in linked list
* Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
int count;

for (count = 0; h != NULL; count++)
h = h->next;

return (count);
}
