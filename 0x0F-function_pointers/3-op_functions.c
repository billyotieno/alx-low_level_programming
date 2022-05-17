#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function with two arguments
 * @a: integer
 * @b: integer
 * description: add two input
 * Return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function with two arguments
 * @a: integer tp
 * @b: integer tp
 * description: subtract two input
 * Return: value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function with two arguments
 * @a: integer tp
 * @b: integer tp
 * description: multiply two input
 * Return: value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function with two arguments
 * @a: integer tp
 * @b: integer tp
 * description: divide two input
 * Return: value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function with two arguments
 * @a: integer tp
 * @b: integer tp
 * description: mod two input
 * Return: value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
