#include "3-calc.h"
/**
 *op_add - adds two numbers
 *@a: integer
 *@b: integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a: integer
 *@b: integer
 *
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: integer
 *@b: integer
 *
 *Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *@a: integer
 *@b: integer
 *
 *Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - modulus
 *@a: integer
 *@b: integer
 *
 *Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
