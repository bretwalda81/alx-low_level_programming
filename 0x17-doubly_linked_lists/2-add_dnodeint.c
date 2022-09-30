#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list
* @head: A pointer to the head
* @n: The integer in the new node
* Return: The address of the new node, otherwise NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;

return (new);
}
