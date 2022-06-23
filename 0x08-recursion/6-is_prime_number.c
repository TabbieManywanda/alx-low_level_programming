#include "main.h"

int tmp_prime(int n, int i);

/**
 *div - determine if number is prime
 *@a: integer parameter
 *@z: integer parameter
 *
 *Return: boolean
 */
int div(int a, int z)
{
	if (z % a == 0)
	{
		return (0);
	}
	else if (z / 2 > a)
	{
		return (div(a + 2, z));
	}
	else
	{
		return (1);
	}
}

/**
 *is_prime_number - check if prime number
 *@n: integer being checked
 *
 *Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (div(3, n));
	}
}
