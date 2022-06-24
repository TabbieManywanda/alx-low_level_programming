#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument count
 *
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc > 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
