#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert numbers
 * @n: first no.
 * @m: second no.
 * Return: no of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int cnt;

	diff = n ^ m;
	cnt = 0;

	while (diff)
	{
		cnt++;
		diff &= (diff - 1);
	}

	return (cnt);
}
