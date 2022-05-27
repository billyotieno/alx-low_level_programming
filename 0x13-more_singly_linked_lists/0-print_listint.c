#include "lists.h"
#include <stdio.h>

/**
  * print_listint - print all elements of the list
  * @h: the head of the linked list
  * Return: count of the nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count=0; c != NULL; count++, c = c->next)
		printf("%d\n", c->n);

	return (count);
}
