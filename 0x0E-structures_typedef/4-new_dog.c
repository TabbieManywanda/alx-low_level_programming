#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *new_dog - creates new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of dog owner
 *
 *Return: dog1, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *dog1;

	dog1 = (dog_t *)malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	nlen = olen = 0;

	while (name[nlen++])
		;
	while (owner[olen++])
		;

	dog1->name = malloc(nlen * sizeof(dog1->name));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	i = 0;

	while (i <= nlen)
	{
		dog1->name[i] = name[i];
		i++;
	}
	dog1->age = age;
	dog1->owner = malloc(olen * sizeof(dog1->owner));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (i = 0; i <= olen; i++)
		dog1->owner[i] = owner[i];
	return (dog1);
}
