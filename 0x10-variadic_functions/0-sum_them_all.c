#include "variadic_functions.h"
/**
 *sum_them_all - sum all arguments
 *@n: number of arguments
 *
 *Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
