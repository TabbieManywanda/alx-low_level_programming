#include <stdio.h>
/**
 * main - Entry point
 * Printing numbers of base 16
 * in lower case
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
