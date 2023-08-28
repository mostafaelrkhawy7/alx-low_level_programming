#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the index
 * @head: first node 
 * @index: index of the node
 *
 * Return: pointer, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tp = head;

	while (tp && x < index)
	{
		tp = tp->next;
		x++;
	}

	return (tp ? tp : NULL);
}
