#include <stdio.h>
/**
 * main - Entry point
 * Printing alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');

	return (0);
}
