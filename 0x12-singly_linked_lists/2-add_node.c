#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 *add_node - Adds a new node at the beginning
 *of the list
 *@head: pointer to pointer to head node
 *@str: pointer to string
 *
 *Return: Address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
