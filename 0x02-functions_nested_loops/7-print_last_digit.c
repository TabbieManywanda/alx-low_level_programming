#include "main.h"
/**
 *print_last_digit - Prints last digit of a number
 *@d: integer
 *
 *Return: ld
 */
int print_last_digit(int d)
{
	int ld;

	if (d < 0)
	{
		ld = (d % 10) * -1;
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		ld = d % 10;
		_putchar('0' + ld);
		return (ld);
	}
}
