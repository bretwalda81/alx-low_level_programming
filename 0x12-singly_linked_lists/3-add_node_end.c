#include "lists.h"
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list
* @head: address of the first node
* @str: string to be duplicated into list
* Return: address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *hold1, *hold2;
unsigned int i = 0;

if (str == NULL)
return (NULL);

hold1 = malloc(sizeof(list_t));
if (hold1 == NULL)
return (NULL);

hold1->str = strdup(str);
if (hold1->str == NULL)
{
free(hold1);
return (NULL);
}

while (str[i])
i++;
hold1->len = i;
hold1->next = NULL;

if (*head == NULL)
{
*head = hold1;
return (hold1);
}
hold2 = *head;
while (hold2->next)
hold2 = hold2->next;
hold2->next = hold1;
return (hold1);
}
