#include "function_pointers.h"
/**
 *int_index - Searches for an integer
 *@array: pointer to array of integers
 *@size: size of array
 *@cmp: pointer to function
 *
 *Return: index of first element for which cmp function
 *does not return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
