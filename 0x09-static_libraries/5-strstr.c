#include "main.h"
#include <stddef.h>
/**
 *_strstr - finds first occurence of the substring needle
 *in the string haystack
 *@haystack: pointer to string
 *@needle: pointer to substring
 *
 * Return: pointer to beginning of located substring
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0')
	{
		n = needle;
		h = haystack;

		while (*n != '\0')
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
