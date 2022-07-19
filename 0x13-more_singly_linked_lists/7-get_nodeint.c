#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *get_nodeint_at_index - returns nth node
 *@head: head node
 *@index: index of the node
 *starting at 0
 *
 * Return: nth node or NULL
 * if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (head);
}
