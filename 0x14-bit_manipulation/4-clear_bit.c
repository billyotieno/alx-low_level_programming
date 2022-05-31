#include "main.h"

/**
 * clear_bit - set bit value to 0
 * @n: number.
 * @index: index, starting from 0 of the bit you want to set.
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x =  ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & x;
	return (1);
}
