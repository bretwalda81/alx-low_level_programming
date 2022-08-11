#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a list
* @head: first node of list
*/
void free_list(list_t *head)
{
list_t *hold1, *hold2;

hold1 = head;
while (hold1 != NULL)
{
hold2 = hold1->next;
free(hold1->str);
free(hold1);
hold1 = hold2;
}
}
