#include "lists.h"

/**
* get_dnodeint_at_index - Locates a node in a doubly llinked list
* @head: The head node
* @index: The node to locate
* Return: The address of the located node, otherwise NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}

return (head);
}
