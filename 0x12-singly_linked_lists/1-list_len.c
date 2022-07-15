#include "lists.h"
#include <stddef.h>
/**
 *list_len - returns number of elements in a linked list_t list
 *@h: node
 *
 *Return: number of elements (i)
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
