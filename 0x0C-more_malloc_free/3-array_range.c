#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *array_range - Creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *
 *Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int i, *array, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 2;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
