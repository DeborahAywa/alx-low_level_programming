#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the
 * elements of linked list list_t
 * @h:pointer to the list_t list to be print
 *
 * Return:number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%u]%s\n", h->len, h->str);
			h = h->next;
			p++;
		}
	}
	return (p);
}
