#include "lists.h"

/**
 * free_dlistint - function free as dllist
 * @head: pointer to list head
 * Return: None
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
