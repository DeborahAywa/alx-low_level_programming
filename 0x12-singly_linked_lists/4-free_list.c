#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list_t list
 * @head:pointer to list_t to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
