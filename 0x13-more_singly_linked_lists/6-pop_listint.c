#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of listint_t
 *
 * @head:pointer to the first element of linkedint_t
 * list
 *
 * Return:return heads node's data on success and
 * 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
	{
		return (0);
	}
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
