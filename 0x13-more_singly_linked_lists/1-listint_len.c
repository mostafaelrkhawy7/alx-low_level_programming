#include "lists.h"

/**
 * listint_len - returns nodes in a linked lists
 * @h: linked list
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number1 = 0;

	while (h)
	{
		number1++;
		h = h->next;
	}

	return (number1);
}
