#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *argstostr - Concatenates all arguments of program
 *@ac: argument count
 *@av: argument vector
 *
 *Return: str or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
