#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: destination
 *@src: source
 *@n: number of bytes from src to dest
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
