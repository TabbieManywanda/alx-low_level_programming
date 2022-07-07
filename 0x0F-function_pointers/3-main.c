#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char sign;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	sign = *argv[2];

	if ((sign == '/' || sign == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(num1, num2);

	printf("%d\n", result);

	return (0);
}
