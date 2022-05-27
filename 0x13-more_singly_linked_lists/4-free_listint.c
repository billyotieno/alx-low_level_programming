#include "lists.h"

/**
* free_listint - free a linkedlist
* @head: linkedlist head
*/
void free_listint(listint_t *head)
{
	listint_t *hold_list;

	while (head != NULL)
	{
		hold_list = head;
		head = head->next;
		free(hold_list);
	}
}
