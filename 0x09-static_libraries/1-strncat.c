#include "main.h"
/**
 *_strncat - appends n characters from string src
 *to string dest
 *@src: source
 *@dest: destination
 *@n: number of bytes appended to dest from src
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	j = 0;

	while (*(src + j) != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
