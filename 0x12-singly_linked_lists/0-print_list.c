#include "lists.h"
#include <stdio.h>

/**
* print_list - print all elements of `list_t` list
* @h: head of linked list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *present_node;
	size_t c;

	c = 0;
	present_node = h;
	while (present_node != NULL)
	{
		if (present_node->str == NULL)
		{
			printf("[%d] %s\n", present_node->len, NULL);
		}
		else
		{
			printf("[%d] %s\n", present_node->len, present_node->str);
		}
		printf("[%d] %s\n", present_node->len, present_node->str);
		present_node = present_node->next;
		c++;
	}

	return (c);
}
