#include "main.h"
/**
 *print_diagonal - Prints a diagonal line
 *@n: number of \ to be printed
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
