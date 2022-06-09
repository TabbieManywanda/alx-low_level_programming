#include "main.h"
/**
 *print_numbers - Prints numbers from 0 t0 9
 *followed by a new line
 *Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
