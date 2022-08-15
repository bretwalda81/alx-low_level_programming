#include "lists.h"

/**
* sum_listint - sums all the data (n) of a linked list
* @head: first node
* Return: Sum. 0 if list is empty
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *hold = head;

while (hold)
{
sum += hold->n;
hold = hold->next;
}
return (sum);
}
