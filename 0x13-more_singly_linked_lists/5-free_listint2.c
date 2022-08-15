#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: first node
*/
void free_listint2(listint_t **head)
{
listint_t *hold;

if (head == NULL)
return;

while (*head)
{
hold = (*head)->next;
free(*head);
*head = hold;
}
*head = NULL;
}
