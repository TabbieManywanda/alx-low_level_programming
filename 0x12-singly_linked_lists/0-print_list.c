#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - Prints all elements of a list_t list
 *@h: node in the list
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
