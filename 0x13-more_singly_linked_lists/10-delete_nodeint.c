#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *delete_nodeint_at_index - Deletes node at index
 *@head: pointer to pointer to head node
 *@index: index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i = 0;

	current = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
