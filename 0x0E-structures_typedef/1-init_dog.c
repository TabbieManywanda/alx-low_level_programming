#include "dog.h"
#include <stddef.h>
/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to element of type dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
