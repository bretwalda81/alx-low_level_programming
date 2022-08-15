#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: first node
* Return: the head node's data
*/
int pop_listint(listint_t **head)
{
listint_t *hold;
int i;

if (!head || !*head)
return (0);

i = (*head)->n;
hold = (*head)->next;
free(*head);
*head = hold;
return (i);
}
