#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *insert_nodeint_at_index - inserts new node
 *at a given position
 *@head: pointer to pointer to head node
 *@idx: index of list where new node
 *should be added
 *@n: integer in new node
 *
 * Return: address of new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;

	current = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
