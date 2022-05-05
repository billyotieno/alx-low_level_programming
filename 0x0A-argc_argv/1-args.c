#include <stdio.h>
#include "main.h"

/*
 * main - function main
 * This program prints the number of arguments passed to it.
 * main - print the number of args passed to it
 * @argc - argument count
 * @argv - argument vector/array of strings
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
