#include "lists.h"
/**
 *free_list - frees a list
 *@head: pointer to head of node
 *
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *random;

	while ((random = head) != NULL)
	{
		head = head->next;
		free(random->str);
		free(random);
	}
}
