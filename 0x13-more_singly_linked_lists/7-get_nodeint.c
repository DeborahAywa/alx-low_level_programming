#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list
 *
 * @head:pointer to first node of list
 * @index:index of the node
 *
 * Return:pointer to the node at the index
 * on success and 0 on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;
	listint_t *newNode;

	for (
