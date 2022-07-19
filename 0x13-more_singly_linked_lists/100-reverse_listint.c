#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *reverse_listint - Reverses a linked list
 *@head: pointer to pointer of head node
 *
 *Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
