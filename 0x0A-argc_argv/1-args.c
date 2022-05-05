#include <stdio.h>
#include "main.h"

/**
 * main - print the number of args passed to it.
 * @argc: argument count.
 * @argv: argument vector/array of strings.
 * Description: description for the main function.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
