#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_name - prints a name
 *@name: pointer to string
 *@f: pointer to funtion
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
