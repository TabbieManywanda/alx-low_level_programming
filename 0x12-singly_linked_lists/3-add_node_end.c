#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 *add_node_end - Adds a new node at the end of a list
 *@head: pointer to pointer of head
 *@str: pointer to string
 *
 *Return: address of new element (*head) or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
