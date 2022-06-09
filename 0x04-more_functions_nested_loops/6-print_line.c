#include "main.h"
/**
 *print_line - Prints a straight line
 *@n: number of times _ should be printed
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
