#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given provided index
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 * description: the store node holds the lists during the deletion.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *store_node;
	unsigned int i;

	i = 0;
	current_node = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		store_node = current_node;
		if (current_node->next)
			current_node = current_node->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current_node->next;
	else if (current_node->next)
		store_node->next = current_node->next;
	else
		store_node->next = NULL;

	free(current_node);
	return (1);
}
