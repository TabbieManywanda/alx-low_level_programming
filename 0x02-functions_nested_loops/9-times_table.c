#include "main.h"
/**
 *times_table - Prints the 9 times table starting with 0
 *
 *Return: void
 */
void times_table(void)
{
	int i, num, pro;

	i = 0;

	while (i <= 9)
	{
		_putchar('0');
		num = 1;

		while (num <= 9)
		{
			pro = i * num;
			_putchar(',');
			_putchar(' ');
			if (pro <= 9)
			{
				_putchar(' ');
				_putchar('0' + pro);
			}
			else
			{
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
			}
			num++;
		}
		_putchar('\n');
		i++;
	}
}
