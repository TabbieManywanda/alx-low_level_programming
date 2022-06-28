#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *_strdup - returns pointer to a new string
 *which is a duplicate of the string str
 *@str: string
 *
 *Return: s or NULL
 */
char *_strdup(char *str)
{
	int n, size, i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		;
	size = n + 1;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}

	if (size < i)
		return (NULL);
	return (s);
}
