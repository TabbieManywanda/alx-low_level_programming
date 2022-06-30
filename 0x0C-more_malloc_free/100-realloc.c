#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *_realloc - Reallocates memory block using malloc and free
 *@ptr: pointer to previously allocated memory
 *@old_size: allocated space for ptr
 *@new_size: new size of the new memory block
 *
 *Return: pointer to new memory allocated, ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (p);
	}

	for (i = 0; i < new_size; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
