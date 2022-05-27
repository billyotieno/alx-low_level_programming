#include "lists.h"

/**
* pop_listint - deletes the head node for linkedlist
* @head: double pointer to head node of linked list
* Return: head nodes data (n)
*/
int pop_listint(listint_t **head)
{
	int num;
	listint_t *hold_node;

	if (*head == NULL)
		return (0);

	hold_node = *head;
	num = hold_node->n;
	*head = hold_node->next;
	free(hold_node);

	return (num);
}


