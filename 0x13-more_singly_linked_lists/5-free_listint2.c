#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *free_listint2 - Frees a list
 *and sets head to NULL
 *@head: pointer to pointer to head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *node2;

	node = *head;

	while (node != NULL)
	{
		node2 = node;
		node = node->next;
		free(node2);
	}
	*head = NULL;
}
