#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary to inti
 * @b: char string
 * Return: converted decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, sum = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			sum += power;
	}

	return (sum);
}
