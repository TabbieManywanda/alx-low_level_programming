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
	int data;
	listint_t *temp;
	listint_t *t;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;

	t = temp->next;
	free(temp);

	*head = t;

	return (data);
}
