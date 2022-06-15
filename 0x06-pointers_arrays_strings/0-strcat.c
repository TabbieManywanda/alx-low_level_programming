#include "main.h"
/**
 *_strcat - appends src string to the dest string
 *overwriting the \0 at the end of dest
 *@dest: destination string
 *@src: source string
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
