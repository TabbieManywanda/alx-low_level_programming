#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *add_nodeint - Adds a new node
 *at the beginning of a list
 *@head: pointer to poiter to head node
 *@n: data in new node
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
