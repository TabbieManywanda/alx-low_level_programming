#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *listint_len - returns number of elements
 *in a linked list
 *@h: nodes in the list
 *
 *Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
