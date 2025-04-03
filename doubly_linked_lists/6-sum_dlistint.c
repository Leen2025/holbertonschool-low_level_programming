#include "lists.h"
/**
 * sum_dlistint - function that return the sum of all the ,
 * data (n) of a linked list.
 * @head: pointer to pointer to head of linked list.
 *
 * If the list empty, return 0.
 *
 * Return: The sum.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
