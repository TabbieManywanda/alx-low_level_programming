#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *create_array - creates an array of chars
 *and initializes it with a specific char
 *@size: size of array
 *@c: initializer
 *
 * Return: NULL or a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (a == NULL)
			return (NULL);
		a[i] = c;
	}
	return (a);
}
