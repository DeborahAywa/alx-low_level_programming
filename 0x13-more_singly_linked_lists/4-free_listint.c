#include "lists.h"

/**
 * free_listint - function that frees
 * a listint_t list
 *
 * @head:pointer to the first element
 * of listint_t list
 */

void free_listint(listint_t *head)
{
	/*new node to traverse the list*/
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
