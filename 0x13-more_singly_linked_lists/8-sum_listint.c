#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *sum_listint - returns sum of all data
 *in a linked list
 *@head: head node
 *
 *Return: sum of all data in a list
 *or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	sum = 0;

	node = head;

	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
