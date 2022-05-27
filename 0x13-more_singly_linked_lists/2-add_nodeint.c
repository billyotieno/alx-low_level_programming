#include "lists.h"

/**
  * add_nodeint - function creates a node a the beginning of list
  * @head: double pointer to head node
  * @n: integer to store in new node
  * Return: address of the new element or NULL if failure
  * description: function returns new_node or null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *new_node;

	h = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	*head = new_node;

	if (h == NULL)
		new_node->next = NULL;
	else
		new_node->next = hfd;

	return (new_node);
}
