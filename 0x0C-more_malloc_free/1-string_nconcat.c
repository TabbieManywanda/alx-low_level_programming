#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *string_nconcat - Concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes of string 2
 *
 *Return: str or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	size = i + n + 1;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
