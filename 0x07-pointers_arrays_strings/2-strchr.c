#include "main.h"
#include <stddef.h>
/**
 *_strchr - Locating a character in a string
 *@s: string
 *@c: character
 *
 *Return: s + i or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
