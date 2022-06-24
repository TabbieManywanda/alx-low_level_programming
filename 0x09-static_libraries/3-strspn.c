#include "main.h"
/**
 *_strspn - Gets the length of a prefix substring
 *@s: string
 *@accept: string from which prefix substring in s comes from
 *
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length;

	length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0' && *(accept + j) != s[i]; j++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
