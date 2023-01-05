#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *linear_search - searches for value in array
 *@array: poiter to first element of the array
 *@size: size of array
 *@value: value being searched for
 *Return: first index value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
