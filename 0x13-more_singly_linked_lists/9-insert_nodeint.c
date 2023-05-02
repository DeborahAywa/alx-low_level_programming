#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 *
 * @head:pointer to the first element in list
 * @idx:position to insert new node
 * @n:data to insert to new node
 *
 * Return:pointer to new node on success or NULL
 * on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*create new node,temporary node to traverse and list and variable*/
	listint_t *newNode;
	listint_t *temp = *head;
	unsigned int i;

	/*memory to new node*/
	newNode = malloc(sizeof(listint_t));
	/*unable to add new node or program fails*/
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	/* temp node to traverse list*/
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	/*point new node to what the next of target was pointing*/
	newNode->next = temp->next;
	/*temp node to now point to new node*/
	temp->next = newNode;
	return (newNode);
}
