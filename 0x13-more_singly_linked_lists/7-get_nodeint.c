#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked list
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 * Description: this function loops over the list till the nth node then
 * return's the n-th node as current_node iteration
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int count;

	current_node = head;
	count = 0;
	while (count < index)
	{
		if (current_node)
			current_node = current_node->next;
		else
			return (NULL);
		count++;
	}

	if (current_node)
		return (current_node);
	else
		return (NULL);
}
