#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *free_grid - Frees a 2D grid
 *@grid: pointer to pointer to grid
 *@height: rows
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
