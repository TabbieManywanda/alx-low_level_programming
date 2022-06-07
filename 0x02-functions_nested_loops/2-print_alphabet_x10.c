#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alph, nl;

	nl = 0;

	while (nl <= 9)
	{
		alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		nl++;
	}
}
