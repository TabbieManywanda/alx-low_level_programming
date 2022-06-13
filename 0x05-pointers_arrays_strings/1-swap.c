#include "main.h"
/**
 *swap_int - swaps values of two integers
 *@a: pointer to integer
 * @b: pointer to integer
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
