#include "lists.h"

/**
 * sum_listint - get the sum of all the integer values in linked list
 * @head: pointer to head
 * Return: sum total of the integers
 */
int sum_listint(listint_t *head)
{
	int sum_total;
	listint_t *current_node;

	for (sum_total = 0, current_node = head; current_node != NULL;
			current_node = current_node->next)
		sum_total += current_node->n;

	return (sum_total);
}
