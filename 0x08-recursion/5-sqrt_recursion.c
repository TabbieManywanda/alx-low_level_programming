#include "main.h"
/**
 *_sqrt - find square root by recursively checking
 *@a: number to get square root
 *@b: guessing parameter
 *
 *Return: square root or -1
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}

/**
 *_sqrt_recursion - finds the square root of a number
 *@n: integer
 *
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(n, 1));
}
