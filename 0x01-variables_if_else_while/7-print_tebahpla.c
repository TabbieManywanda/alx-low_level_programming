#include <stdio.h>
/**
 * main - Entry point
 * printing the alphabet in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
