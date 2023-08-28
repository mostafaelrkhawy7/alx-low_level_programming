#include "lists.h"

/**
 * print_listint - prints number of nodes 
 * @h: linked list
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
