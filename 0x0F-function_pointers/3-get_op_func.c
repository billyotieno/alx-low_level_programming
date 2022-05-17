#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: string character type
 * description: struct with operators
 * Return: pointer to operator and function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int k = 0;

	while (ops[k].op)
	{
		if (*s == *ops[k].op)
		{
			return (ops[k].f);
		}
		k++;
	}
	printf("Error\n");
	exit(99);
}
