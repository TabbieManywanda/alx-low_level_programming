#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *alloc_grid - Returns a pointer to a 2-D array of integers
 *@width: columns
 *@height: rows
 *
 *Return: array or NULL
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		array[h] = malloc(width * sizeof(int *));
		if (array[h] == NULL)
		{
			while (--h >= 0)
				free(array[h]);
			free(array);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}
