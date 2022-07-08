#include "lists.h"

/**
 * sum_dlistint - func returns a sum total of all data in nodes
 * @head: pointer to list head
 * Return: sum(data in nodes) or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
