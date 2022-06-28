#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: pointer to string one
 *@s2: pointer to string 2
 *
 *Return: str or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	size = i + j + 1;
	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		str[i] = s2[j];
	}
	*(str + i) = '\0';
	return (str);
}
