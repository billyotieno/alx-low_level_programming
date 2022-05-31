#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to decimal number
 * @index: index position to change, starting from 0
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > 64)
		return (-1);

	for (z = 1; index > 0; index--, z *= 2)
		;
	*n += z;

	return (1);
}
