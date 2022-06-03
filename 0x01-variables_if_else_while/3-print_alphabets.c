#include <stdio.h>
/**
 * main - Entry point
 * print alphabets
 * in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
