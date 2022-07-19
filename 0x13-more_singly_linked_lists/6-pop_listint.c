#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *pop_listint - Deletes the head node of a linked list
 *@head: pointer to pointer to head node
 *
 *Return: head node's data (n)
 *or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	free(temp);

	return (temp->n);
}
