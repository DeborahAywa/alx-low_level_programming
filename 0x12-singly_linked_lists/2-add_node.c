#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of list_t list
 * @head:double pointer to the list_t list
 * @str: new string to add at the beginning
 * of list_t list
 *
 * Return:address of new element on success
 * or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	len = strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
