#include "main.h"
/**
 *more_numbers - Printing 0 t0 14 10 times
 *
 *Return: void
 */
void more_numbers(void)
{
	int nl, num;

	for (nl = 0; nl <= 9; nl++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
