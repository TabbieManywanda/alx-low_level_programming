#include "main.h"
/**
 *_len - get length of a string
 *@s: pointer to string
 *
 *Return: length of a string
 */
int _len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_len(s + 1) + 1);
}

/**
 *pndrome - checks for palindrome strings
 *@s: pointer to string
 *@i: position
 *
 *Return: pndrome
 */
int pndrome(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (pndrome(s + 1, i - 2));
	}
	return (0);
}

/**
 *is_palindrome - checks for palindrome
 *@s: pointer to string
 *
 *Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _len(s);

	return (pndrome(s, len - 1));
}
