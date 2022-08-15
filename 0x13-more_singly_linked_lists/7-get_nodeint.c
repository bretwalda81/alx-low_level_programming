#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: first node
* @index: index of the node
* Return: pointer to nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *hold = head;

while (hold && i < index)
{
hold = hold->next;
i++;
}
return (temp ? temp : NULL);
}
