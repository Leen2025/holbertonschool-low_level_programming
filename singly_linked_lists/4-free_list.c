#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list -Function that frees a singly linked list.
 * @head: Pointer to singly linked list.
 *
 * Return: no return.
 *
 */
void free_list(list_t *head)
{
list_t *temp_variable;
temp_variable = head;
while (head != NULL)
{
temp_variable = head;
head = head->next;
free(temp_variable->str);
free(temp_variable);
}
free(head);
}
