#include "main.h"
/**
 *get_bit - Returns value of a bit ata given index
 *@n: number
 *@index: index starting from 0
 *
 *Return: value of bit at index
 *or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
