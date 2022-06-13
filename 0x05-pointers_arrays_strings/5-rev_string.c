#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char begg, end;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	i--;
	j = i / 2;

	while (j >= 0)
	{
		begg = s[i - j];
		end = s[j];
		s[j] = begg;
		s[i - j] = end;
		j--;
	}
}
