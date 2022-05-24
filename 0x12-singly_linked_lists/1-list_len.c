#include "lists.h"

/**
* list_len - returns the no. of elements in the linked list list_t.
* @h: pointer to the list.
* Return: number of nodes.
**/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

