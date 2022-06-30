#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - Allocates memory using malloc
 *@b: size
 *
 *Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
