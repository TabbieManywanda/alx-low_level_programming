#include "main.h"
/**
 *flip_bits - Returns number of bits you need to flip
 *to get from one number to another
 *@n: number
 *@m: number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flip;

	flip = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			flip++;
	return (flip);
}
