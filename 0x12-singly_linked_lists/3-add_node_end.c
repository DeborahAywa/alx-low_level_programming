#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds new
 * node at the end of a list_t list
 * @head:double pointer to the list list_t
 * @str:string to be put in the new node
 *
 * Return:the address of the new element
 * on success and NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (temp->next)
		{
		temp = temp->next;
		temp->next = new;
		return (new);
		}
	}
	return (new);
}
