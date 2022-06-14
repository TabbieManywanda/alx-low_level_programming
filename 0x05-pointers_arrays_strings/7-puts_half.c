#include "main.h"
/**
 *puts_half - prints last half of a string
 *followed by a new line
 *@str: string
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i, half;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		half = (i - 1) / 2;
	}
	else
	{
		half = i / 2;
	}
	for (; half < i; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
