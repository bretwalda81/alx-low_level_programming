#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a doubly linked list
* @head: A pointer to the head
* @n: The integer in the new node
* Return: The address of the new node, otherwise NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *last;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
 *head = new;
return (new);
}

last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
new->prev = last;

return (new);
}
