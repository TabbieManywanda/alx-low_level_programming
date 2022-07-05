#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_dog - Prints struct dog
 *@d: pointer to element of struct dog
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		printf("Name: %s\n", d->name);
		printf("Age : %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
