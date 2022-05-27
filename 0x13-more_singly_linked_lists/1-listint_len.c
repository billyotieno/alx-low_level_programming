#include "lists.h"

/**
 * listint_len - number of elements in linked_list
 * @h: linked list head
 * return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *d;
	size_t count;

	if (h == NULL)
		return (NULL);

	for (d = h, count = 0; d != NULL; count++, d = d->next)
		;

	return (count);
}
