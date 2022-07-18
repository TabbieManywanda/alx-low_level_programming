#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *free_listint - Frees a listint_t list
 *@head: head node
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
