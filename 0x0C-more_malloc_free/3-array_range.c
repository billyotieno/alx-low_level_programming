#include "main.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *j, i;

	if (min > max)
		return (NULL);

	j = malloc((max - min + 1) * sizeof(*j));
	if (j == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		j[i] = min;

	return (j);
}
