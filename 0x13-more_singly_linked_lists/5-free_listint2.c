#include "lists.h"

/**
* free_listint2 - free a linkedlist
* @head: double pointer to linkedlist head
*/
void free_listint2(listint_t **head)
{
	listint_t *hold_list;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold_list = *head;
		*head = (*head)->next;
		free(hold_list);
	}
}
