#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - this function reverses a linkedlist
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *store_node;
	listint_t *current_node;

	if (*head == NULL)
		return (NULL);

	current_node = *head;
	*head = current_node->next;
	store_node = (*head)->next;
	current_node->next = NULL;
	if (*head == NULL)
	{
		*head = current_node;
		return (current_node);
	}

	while (store_node != NULL)
	{
		(*head)->next = current_node;
		current_node = *head;
		*head = store_node;
		store_node = (*head)->next;
	}

	(*head)->next = current_node;
	return (*head);
}
