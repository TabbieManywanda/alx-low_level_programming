#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
