#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - conerts binary to unsigned int
 *@b: pointer to string of 1s and 0s
 *
 *Return: conerted number
 *or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, j = 1; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			dec += j;
	}
	return (dec);
}
