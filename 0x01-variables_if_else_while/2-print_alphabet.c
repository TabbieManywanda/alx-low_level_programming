#include <stdio.h>
/**
 * main - Entry point
 * Printing the alphabet in lower case
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
