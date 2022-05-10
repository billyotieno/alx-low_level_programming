#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc
 * Description: If function fails it exits with 98
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);
	if (z == NULL)
		exit(98);

	return (z);
}
