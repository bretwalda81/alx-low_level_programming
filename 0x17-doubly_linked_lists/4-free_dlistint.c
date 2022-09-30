#include "lists.h"

/**
* free_dlistint - Frees a doubly linked list.
* @head: The head of the list.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *hold;

while (head)
{
hold = head->next;
free(head);
head = hold;
}
}
