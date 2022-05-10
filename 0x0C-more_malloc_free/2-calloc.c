#include "main.h"

/**
 * _calloc - allocates memory for an arr given number of elements and size
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: returns pointer allocated to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pnt;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	pnt = malloc(nmemb * size);
	if (pnt == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		pnt[i] = 0;

	return (pnt);
}
