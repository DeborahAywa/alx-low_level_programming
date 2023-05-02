#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete
 * node at a specific index in linked list
 *
 * @head:pointer to first element of linked list
 * @index:index of node to delete
 *
 * Return:1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int p = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (p < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		p++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
