#include "lists.h"
#include <stddef.h>
/**
 *add_nodeint_end - Adds a new node
 *at the end of a linked list
 *@head: pointer to pointer to head node
 *@n: data in new node
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}
	return (newnode);
}
