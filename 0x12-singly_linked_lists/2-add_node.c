#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = string_length(new->str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * string_length - returns the length of string.
 * @s: string.
 * Return: length of @s.
 */
int string_length(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + string_length(s + 1));
}
