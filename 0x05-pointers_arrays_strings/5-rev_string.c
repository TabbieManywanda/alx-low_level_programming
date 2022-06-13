#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i, j, temp;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	i--;
	j = 0;

	while (j < i / 2)
	{
		temp = s[j];
		s[j] = s[i - j];
		s[i - j] = temp;
		j++;
	}
}
