#include "main.h"
/**
 *_abs - Computes absolute values of integers
 *@j: integer
 *
 *Return: j or positive
 */
int _abs(int j)
{
	int positive;

	if (j < 0)
	{
		positive = j * -1;
		return (positive);
	}
	else
		return (j);
}
