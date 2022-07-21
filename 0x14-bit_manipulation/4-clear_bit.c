#include "main.h"
/**
 *clear_bit - Sets value of a bit to 0
 *at a given index
 *@n: pointer to number
 *@index: index starting from 0
 *
 * Return: 1 if it worked
 * -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
