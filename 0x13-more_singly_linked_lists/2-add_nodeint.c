#include "lists.h"

/**
 * add_nodeint - function that adds a new
 * node at the beginning of listint_t list
 *
 * @head:pointer to the first node in list
 * @n:data to insert in the new node
 *
 * Return:pointer to new node or Null if
 * it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create new node*/
	listint_t *newNode;
	/*allocate memory to newNode*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	/*check if list is empty*/
	if (*head == NULL)
	{
		newNode->next = NULL;
	}
	else
	{/* next of newNode to what head is pointing to */
		newNode->next = *head;
	}
	/*redirect head to point to newNode*/
	*head = newNode;
	return (newNode);
}
