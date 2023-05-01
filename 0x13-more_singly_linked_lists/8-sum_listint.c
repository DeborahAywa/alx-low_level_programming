#include "lists.h"

/**
 * sum_listint - function that sums n data
 * in listint_t list
 *
 * @head:pointer to the first element of
 * linked list
 *
 * Return:return the sum and 0 if list
 * is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
