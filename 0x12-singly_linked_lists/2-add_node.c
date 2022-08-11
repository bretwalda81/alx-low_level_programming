#include "lists.h"
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: address of the first node
* @str: string to be duplicated into list
* Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *hold;
unsigned int i = 0;

hold = malloc(sizeof(list_t));
if (hold == NULL)
return (NULL);
while (str[i])
i++;

hold->str = strdup(str);
hold->len = i;
hold->next = *head;
*head = hold;
return (*head);
}
