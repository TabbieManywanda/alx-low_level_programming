#include "main.h"
/**
 *set_string - sets value of a pointer to a char
 *@s: pointer to a pointer to a string
 *@to: string to set value to
 *
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
