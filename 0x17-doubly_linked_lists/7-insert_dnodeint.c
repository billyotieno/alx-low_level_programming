#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index idx[]
 * @head: pointer to head
 * @idx: node index
 * @n: value to add and index idx
 * Return: new node or null
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *tmp, *new, *prev_tmp;

	if (head == NULL && idx > 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*head)
		{
			new->next = *head;
			(*head)->prev = new, *head = new;
		}
		else
			*head = new;

		return (new);
	}

	count = 1, tmp = (*head)->next;

	while (tmp)
	{
		if (idx == count)
		{
			tmp->prev->next = new, new->prev = tmp->prev;
			new->next = tmp, tmp->prev = new;
			return (new);
		}
		count++;
		prev_tmp = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL && count == idx)
	{
		prev_tmp->next = new, new->prev = prev_tmp;
		return (new);
	}

	free(new);
	return (NULL);
}
