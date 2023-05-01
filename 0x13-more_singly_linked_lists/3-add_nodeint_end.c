#include "lists.h"

/**
 * add_nodeint_end - function that adds node
 * at end of listint_t list
 *
 * @head:pointer to the first element of
 * listint_t list
 * @n:data to insert in new element
 *
 * Return:return pointer to the new node
 * or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*create new node*/
	listint_t *newNode;
	listint_t *temp = *head;

	/*allocate memory to new node*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*point next of new node to NULL*/
	newNode->next = NULL;
	/*temp to point to ne node*/
	temp->next = newNode;
	return (newNode);
}
